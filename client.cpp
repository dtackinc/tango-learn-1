/*
 * example of a client using the TANGO C++ api.
 */
#include <queue>

#include <tango.h>
using namespace Tango;

#include <tangoo.h>

// ---------------------------------------------------------------------------
class event_callback_c: public Tango::CallBack
{
	private:
	tangoo::humanize_c humanize;

  public:
  // ---------------------------------------------------------------------------
  virtual void push_event(Tango::DataReadyEventData *event_data) override
  {
		if (event_data->err)
    {
      Tango::Except::print_error_stack(event_data->errors);
      return;
    }	  

		cout << humanize.attribute(event_data) << endl;
	}
};


// ---------------------------------------------------------------------------

int main(int argc, char **argv)
{
 
	event_callback_c event_callback;

  std::queue<int> event_id_queue;

	try
  {
 
//
// create a connection to a TANGO device
//
		// when device server runs with -nodb:
    // DeviceProxy *device = new DeviceProxy("tango://localhost:20001/TangoLearn1Class/devel/ping#dbase=no");

		// when device server runs with dbserver:
    DeviceProxy *device = new DeviceProxy("tangolearn1class/instance1/device1");
 
//
// Ping the device
//

    device->ping();

    TANGOO(event_id_queue.push(device->subscribe_event(
            "tango_learn1_attribute1",
            Tango::EventType::DATA_READY_EVENT,
            &event_callback,
						false)));        

    TANGOO(event_id_queue.push(device->subscribe_event(
            "tango_learn1_attribute2",
            Tango::EventType::DATA_READY_EVENT,
            &event_callback,
						false)));        

//
// Execute a command on the device and extract the reply as a string
//
		cout << "hit enter to continue..." << endl;

		{
      string db_info;
      DeviceData cmd_reply;

      TANGOO(cmd_reply = device->command_inout("tango_learn1_command1"));
      //TANGOO(cmd_reply >> db_info);
      //cout << "Command reply " << db_info << endl;
		}

		cin.get();
 
		while(!event_id_queue.empty())
		{
		  device->unsubscribe_event(event_id_queue.front());
			event_id_queue.pop();
		}
//
// Read a device attribute (string data type)
//
#if false
		{
      double value;
      DeviceAttribute attribute;
      TANGOO(attribute = device->read_attribute("tango_learn1_attribute1"));
      TANGOO(attribute >> value);
      cout << "tango_learn1_attribute1 double: " << value << endl;
		}

		{
      string value;
      DeviceAttribute attribute;
      TANGOO(attribute = device->read_attribute("tango_learn1_attribute2"));
      TANGOO(attribute >> value);
      cout << "tango_learn1_attribute2 string: " << value << endl;
		}
#endif		
  }
  catch (DevFailed &e)
  {
        Except::print_exception(e);
        exit(-1);
  }
}