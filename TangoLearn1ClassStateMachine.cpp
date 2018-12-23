/*----- PROTECTED REGION ID(TangoLearn1ClassStateMachine.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        TangoLearn1ClassStateMachine.cpp
//
// description : State machine file for the TangoLearn1Class class
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

#include <TangoLearn1Class.h>

/*----- PROTECTED REGION END -----*/	//	TangoLearn1Class::TangoLearn1ClassStateMachine.cpp

//================================================================
//  States  |  Description
//================================================================
//  MOVING  |  Tango Learn1 State MOVING


namespace TangoLearn1Class_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : TangoLearn1Class::is_tango_learn1_attribute1_allowed()
 *	Description : Execution allowed for tango_learn1_attribute1 attribute
 */
//--------------------------------------------------------
bool TangoLearn1Class::is_tango_learn1_attribute1_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for tango_learn1_attribute1 attribute in Write access.
	/*----- PROTECTED REGION ID(TangoLearn1Class::tango_learn1_attribute1StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1Class::tango_learn1_attribute1StateAllowed_WRITE

	//	Not any excluded states for tango_learn1_attribute1 attribute in read access.
	/*----- PROTECTED REGION ID(TangoLearn1Class::tango_learn1_attribute1StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1Class::tango_learn1_attribute1StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TangoLearn1Class::is_tango_learn1_attribute2_allowed()
 *	Description : Execution allowed for tango_learn1_attribute2 attribute
 */
//--------------------------------------------------------
bool TangoLearn1Class::is_tango_learn1_attribute2_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for tango_learn1_attribute2 attribute in Write access.
	/*----- PROTECTED REGION ID(TangoLearn1Class::tango_learn1_attribute2StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1Class::tango_learn1_attribute2StateAllowed_WRITE

	//	Not any excluded states for tango_learn1_attribute2 attribute in read access.
	/*----- PROTECTED REGION ID(TangoLearn1Class::tango_learn1_attribute2StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1Class::tango_learn1_attribute2StateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : TangoLearn1Class::is_tango_learn1_command1_allowed()
 *	Description : Execution allowed for tango_learn1_command1 attribute
 */
//--------------------------------------------------------
bool TangoLearn1Class::is_tango_learn1_command1_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for tango_learn1_command1 command.
	/*----- PROTECTED REGION ID(TangoLearn1Class::tango_learn1_command1StateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1Class::tango_learn1_command1StateAllowed
	return true;
}


/*----- PROTECTED REGION ID(TangoLearn1Class::TangoLearn1ClassStateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	TangoLearn1Class::TangoLearn1ClassStateAllowed.AdditionalMethods

}	//	End of namespace
