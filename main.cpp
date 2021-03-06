/*----- PROTECTED REGION ID(TangoLearn1Class::main.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        main.cpp
//
// description : C++ source for the TangoLearn1Class device server main.
//               The main rule is to initialise (and create) the Tango
//               system and to create the DServerClass singleton.
//               The main should be the same for every Tango device server.
//
// project :     Tango Learn 1 Class--Product Title
//
//
// Tango Learn 1Class Class--Class Copyright
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================
#include <tango.h>

// Check if crash reporting is used.
#if defined(ENABLE_CRASH_REPORT)
#  include <crashreporting/crash_report.h>
#else
#  define DECLARE_CRASH_HANDLER
#  define INSTALL_CRASH_HANDLER
#endif

DECLARE_CRASH_HANDLER;

int main(int argc,char *argv[])
{
	INSTALL_CRASH_HANDLER
	try
	{
		// Initialise the device server
		//----------------------------------------
		Tango::Util *tg = Tango::Util::init(argc,argv);

		// Create the device server singleton 
		//	which will create everything
		//----------------------------------------
		tg->server_init(false);

		// Run the endless loop
		//----------------------------------------
		cout << "Ready to accept request 11:45" << endl;
		tg->server_run();
	}
	catch (bad_alloc &)
	{
		cout << "Can't allocate memory to store device object !!!" << endl;
		cout << "Exiting" << endl;
	}
	catch (CORBA::Exception &e)
	{
		Tango::Except::print_exception(e);
		
		cout << "Received a CORBA_Exception" << endl;
		cout << "Exiting" << endl;
	}
	Tango::Util::instance()->server_cleanup();
	return(0);
}

/*----- PROTECTED REGION END -----*/	//	TangoLearn1Class::main.cpp
