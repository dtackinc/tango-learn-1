/*
 * example of a client using the TANGO C++ api.
 */
#include <tango.h>
using namespace Tango;

#include "stango.h"

// ---------------------------------------------------------------------------
class event_callback_c: public Tango::CallBack
{
	public:
	  event_callback_c();

  	void push_event(Tango::DataReadyEventData *event_data);
};

// ---------------------------------------------------------------------------
event_callback_c::event_callback_c(): Tango::CallBack()
{

}

// ---------------------------------------------------------------------------
void event_callback_c::push_event(Tango::DataReadyEventData *event_data)
{
		cout << 
			"device " + event_data->device->dev_name() +
			" saw " + event_data->event +
			" for " + event_data->attr_name;
}


// ---------------------------------------------------------------------------

int main(int argc, char **argv)
{
	try
  {
 
//
// create a connection to a TANGO device
//
 
      DeviceProxy *device = new DeviceProxy("tango://localhost:20001/TangoLearn1Class/devel/ping#dbase=no");
 
//
// Ping the device
//

      device->ping();
 
//
// Execute a command on the device and extract the reply as a string
//

      string db_info;
      DeviceData cmd_reply;

    STANGO(cmd_reply = device->command_inout("tango_learn1_command1"));
     //STANGO(cmd_reply >> db_info);
     //cout << "Command reply " << db_info << endl;
 
//
// Read a device attribute (string data type)
//
		{
      double value;
      DeviceAttribute attribute;
      STANGO(attribute = device->read_attribute("tango_learn1_attribute1"));
      STANGO(attribute >> value);
      cout << "tango_learn1_attribute1 double: " << value << endl;
		}

		{
      string value;
      DeviceAttribute attribute;
      STANGO(attribute = device->read_attribute("tango_learn1_attribute2"));
      STANGO(attribute >> value);
      cout << "tango_learn1_attribute2 string: " << value << endl;
		}

		event_callback_c *event_callback = new event_callback_c();

    STANGO(device->subscribe_event(
            "tango_learn1_attribute1",
            Tango::EventType::DATA_READY_EVENT,
            event_callback,
						false));        

    STANGO(device->subscribe_event(
            "tango_learn1_attribute2",
            Tango::EventType::DATA_READY_EVENT,
            event_callback,
						false));        
  }
  catch (DevFailed &e)
  {
        Except::print_exception(e);
        exit(-1);
  }
}