/*----- PROTECTED REGION ID(TangoLearn1Class::ClassFactory.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        ClassFactory.cpp
//
// description : C++ source for the class_factory method of the DServer
//               device class. This method is responsible for the creation of
//               all class singleton for a device server. It is called
//               at device server startup.
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
#include <TangoLearn1ClassClass.h>

//	Add class header files if needed


/**
 *	Create TangoLearn1Class Class singleton and store it in DServer object.
 */

void Tango::DServer::class_factory()
{
	//	Add method class init if needed
	add_class(TangoLearn1Class_ns::TangoLearn1ClassClass::init("TangoLearn1Class"));
}
/*----- PROTECTED REGION END -----*/	//	TangoLearn1Class::ClassFactory.cpp
