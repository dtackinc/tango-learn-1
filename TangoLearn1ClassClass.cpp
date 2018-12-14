/*----- PROTECTED REGION ID(TangoLearn1ClassClass.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        TangoLearn1ClassClass.cpp
//
// description : C++ source for the TangoLearn1ClassClass.
//               A singleton class derived from DeviceClass.
//               It implements the command and attribute list
//               and all properties and methods required
//               by the TangoLearn1Class once per process.
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


#include <TangoLearn1ClassClass.h>

/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass.cpp

//-------------------------------------------------------------------
/**
 *	Create TangoLearn1ClassClass singleton and
 *	return it in a C function for Python usage
 */
//-------------------------------------------------------------------
extern "C" {
#ifdef _TG_WINDOWS_

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_TangoLearn1Class_class(const char *name) {
		return TangoLearn1Class_ns::TangoLearn1ClassClass::init(name);
	}
}

namespace TangoLearn1Class_ns
{
//===================================================================
//	Initialize pointer for singleton pattern
//===================================================================
TangoLearn1ClassClass *TangoLearn1ClassClass::_instance = NULL;

//--------------------------------------------------------
/**
 * method : 		TangoLearn1ClassClass::TangoLearn1ClassClass(string &s)
 * description : 	constructor for the TangoLearn1ClassClass
 *
 * @param s	The class name
 */
//--------------------------------------------------------
TangoLearn1ClassClass::TangoLearn1ClassClass(string &s):Tango::DeviceClass(s)
{
	cout2 << "Entering TangoLearn1ClassClass constructor" << endl;
	set_default_property();
	get_class_property();
	write_class_property();

	/*----- PROTECTED REGION ID(TangoLearn1ClassClass::constructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::constructor

	cout2 << "Leaving TangoLearn1ClassClass constructor" << endl;
}

//--------------------------------------------------------
/**
 * method : 		TangoLearn1ClassClass::~TangoLearn1ClassClass()
 * description : 	destructor for the TangoLearn1ClassClass
 */
//--------------------------------------------------------
TangoLearn1ClassClass::~TangoLearn1ClassClass()
{
	/*----- PROTECTED REGION ID(TangoLearn1ClassClass::destructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::destructor

	_instance = NULL;
}


//--------------------------------------------------------
/**
 * method : 		TangoLearn1ClassClass::init
 * description : 	Create the object if not already done.
 *                  Otherwise, just return a pointer to the object
 *
 * @param	name	The class name
 */
//--------------------------------------------------------
TangoLearn1ClassClass *TangoLearn1ClassClass::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new TangoLearn1ClassClass(s);
		}
		catch (bad_alloc &)
		{
			throw;
		}
	}
	return _instance;
}

//--------------------------------------------------------
/**
 * method : 		TangoLearn1ClassClass::instance
 * description : 	Check if object already created,
 *                  and return a pointer to the object
 */
//--------------------------------------------------------
TangoLearn1ClassClass *TangoLearn1ClassClass::instance()
{
	if (_instance == NULL)
	{
		cerr << "Class is not initialised !!" << endl;
		exit(-1);
	}
	return _instance;
}



//===================================================================
//	Command execution method calls
//===================================================================
//--------------------------------------------------------
/**
 * method : 		tango_learn1_command1Class::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *tango_learn1_command1Class::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "tango_learn1_command1Class::execute(): arrived" << endl;
	((static_cast<TangoLearn1Class *>(device))->tango_learn1_command1());
	return new CORBA::Any();
}


//===================================================================
//	Properties management
//===================================================================
//--------------------------------------------------------
/**
 *	Method      : TangoLearn1ClassClass::get_class_property()
 *	Description : Get the class property for specified name.
 */
//--------------------------------------------------------
Tango::DbDatum TangoLearn1ClassClass::get_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_prop.size() ; i++)
		if (cl_prop[i].name == prop_name)
			return cl_prop[i];
	//	if not found, returns  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : TangoLearn1ClassClass::get_default_device_property()
 *	Description : Return the default value for device property.
 */
//--------------------------------------------------------
Tango::DbDatum TangoLearn1ClassClass::get_default_device_property(string &prop_name)
{
	for (unsigned int i=0 ; i<dev_def_prop.size() ; i++)
		if (dev_def_prop[i].name == prop_name)
			return dev_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : TangoLearn1ClassClass::get_default_class_property()
 *	Description : Return the default value for class property.
 */
//--------------------------------------------------------
Tango::DbDatum TangoLearn1ClassClass::get_default_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_def_prop.size() ; i++)
		if (cl_def_prop[i].name == prop_name)
			return cl_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : TangoLearn1ClassClass::get_class_property()
 *	Description : Read database to initialize class property data members.
 */
//--------------------------------------------------------
void TangoLearn1ClassClass::get_class_property()
{
	/*----- PROTECTED REGION ID(TangoLearn1ClassClass::get_class_property_before) ENABLED START -----*/
	
	//	Initialize class property data members
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::get_class_property_before
	//	Read class properties from database.
	cl_prop.push_back(Tango::DbDatum("tango_learn1_class_property1"));
	cl_prop.push_back(Tango::DbDatum("tango_learn1_class_property2"));
	
	//	Call database and extract values
	if (Tango::Util::instance()->_UseDb==true)
		get_db_class()->get_property(cl_prop);
	Tango::DbDatum	def_prop;
	int	i = -1;

	//	Try to extract tango_learn1_class_property1 value
	if (cl_prop[++i].is_empty()==false)	cl_prop[i]  >>  tango_learn1_class_property1;
	else
	{
		//	Check default value for tango_learn1_class_property1
		def_prop = get_default_class_property(cl_prop[i].name);
		if (def_prop.is_empty()==false)
		{
			def_prop    >>  tango_learn1_class_property1;
			cl_prop[i]  <<  tango_learn1_class_property1;
		}
	}
	//	Try to extract tango_learn1_class_property2 value
	if (cl_prop[++i].is_empty()==false)	cl_prop[i]  >>  tango_learn1_class_property2;
	else
	{
		//	Check default value for tango_learn1_class_property2
		def_prop = get_default_class_property(cl_prop[i].name);
		if (def_prop.is_empty()==false)
		{
			def_prop    >>  tango_learn1_class_property2;
			cl_prop[i]  <<  tango_learn1_class_property2;
		}
	}
	/*----- PROTECTED REGION ID(TangoLearn1ClassClass::get_class_property_after) ENABLED START -----*/
	
	//	Check class property data members init
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::get_class_property_after

}

//--------------------------------------------------------
/**
 *	Method      : TangoLearn1ClassClass::set_default_property()
 *	Description : Set default property (class and device) for wizard.
 *                For each property, add to wizard property name and description.
 *                If default value has been set, add it to wizard property and
 *                store it in a DbDatum.
 */
//--------------------------------------------------------
void TangoLearn1ClassClass::set_default_property()
{
	string	prop_name;
	string	prop_desc;
	string	prop_def;
	vector<string>	vect_data;

	//	Set Default Class Properties
	prop_name = "tango_learn1_class_property1";
	prop_desc = "Tango Learn1 Class Property1--Description";
	prop_def  = "-1";
	vect_data.clear();
	vect_data.push_back("-1");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		cl_def_prop.push_back(data);
		add_wiz_class_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_class_prop(prop_name, prop_desc);
	prop_name = "tango_learn1_class_property2";
	prop_desc = "Tango Learn1 Class Property2";
	prop_def  = "-1";
	vect_data.clear();
	vect_data.push_back("-1");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		cl_def_prop.push_back(data);
		add_wiz_class_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_class_prop(prop_name, prop_desc);

	//	Set Default device Properties
	prop_name = "tango_learn1_device_property1";
	prop_desc = "Tango Learn1 Device Property1";
	prop_def  = "-";
	vect_data.clear();
	vect_data.push_back("-");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
}

//--------------------------------------------------------
/**
 *	Method      : TangoLearn1ClassClass::write_class_property()
 *	Description : Set class description fields as property in database
 */
//--------------------------------------------------------
void TangoLearn1ClassClass::write_class_property()
{
	//	First time, check if database used
	if (Tango::Util::_UseDb == false)
		return;

	Tango::DbData	data;
	string	classname = get_name();
	string	header;
	string::size_type	start, end;

	//	Put title
	Tango::DbDatum	title("ProjectTitle");
	string	str_title("Tango Learn 1 Class--Product Title");
	title << str_title;
	data.push_back(title);

	//	Put Description
	Tango::DbDatum	description("Description");
	vector<string>	str_desc;
	str_desc.push_back("Tango Learn 1 Class--Class Description");
	description << str_desc;
	data.push_back(description);

	//  Put inheritance
	Tango::DbDatum	inher_datum("InheritedFrom");
	vector<string> inheritance;
	inheritance.push_back("TANGO_BASE_CLASS");
	inher_datum << inheritance;
	data.push_back(inher_datum);

	//	Call database and and values
	get_db_class()->put_property(data);
}

//===================================================================
//	Factory methods
//===================================================================

//--------------------------------------------------------
/**
 *	Method      : TangoLearn1ClassClass::device_factory()
 *	Description : Create the device object(s)
 *                and store them in the device list
 */
//--------------------------------------------------------
void TangoLearn1ClassClass::device_factory(const Tango::DevVarStringArray *devlist_ptr)
{
	/*----- PROTECTED REGION ID(TangoLearn1ClassClass::device_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::device_factory_before

	//	Create devices and add it into the device list
	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
		device_list.push_back(new TangoLearn1Class(this, (*devlist_ptr)[i]));
	}

	//	Manage dynamic attributes if any
	erase_dynamic_attributes(devlist_ptr, get_class_attr()->get_attr_list());

	//	Export devices to the outside world
	for (unsigned long i=1 ; i<=devlist_ptr->length() ; i++)
	{
		//	Add dynamic attributes if any
		TangoLearn1Class *dev = static_cast<TangoLearn1Class *>(device_list[device_list.size()-i]);
		dev->add_dynamic_attributes();

		//	Check before if database used.
		if ((Tango::Util::_UseDb == true) && (Tango::Util::_FileDb == false))
			export_device(dev);
		else
			export_device(dev, dev->get_name().c_str());
	}

	/*----- PROTECTED REGION ID(TangoLearn1ClassClass::device_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::device_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : TangoLearn1ClassClass::attribute_factory()
 *	Description : Create the attribute object(s)
 *                and store them in the attribute list
 */
//--------------------------------------------------------
void TangoLearn1ClassClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
	/*----- PROTECTED REGION ID(TangoLearn1ClassClass::attribute_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::attribute_factory_before

	//	Create a list of static attributes
	create_static_attribute_list(get_class_attr()->get_attr_list());
	/*----- PROTECTED REGION ID(TangoLearn1ClassClass::attribute_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::attribute_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : TangoLearn1ClassClass::pipe_factory()
 *	Description : Create the pipe object(s)
 *                and store them in the pipe list
 */
//--------------------------------------------------------
void TangoLearn1ClassClass::pipe_factory()
{
	/*----- PROTECTED REGION ID(TangoLearn1ClassClass::pipe_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::pipe_factory_before
	/*----- PROTECTED REGION ID(TangoLearn1ClassClass::pipe_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::pipe_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : TangoLearn1ClassClass::command_factory()
 *	Description : Create the command object(s)
 *                and store them in the command list
 */
//--------------------------------------------------------
void TangoLearn1ClassClass::command_factory()
{
	/*----- PROTECTED REGION ID(TangoLearn1ClassClass::command_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::command_factory_before


	//	Command tango_learn1_command1
	tango_learn1_command1Class	*ptango_learn1_command1Cmd =
		new tango_learn1_command1Class("tango_learn1_command1",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"command1_input_argument1",
			"command1_output_argument1",
			Tango::OPERATOR);
	command_list.push_back(ptango_learn1_command1Cmd);

	/*----- PROTECTED REGION ID(TangoLearn1ClassClass::command_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::command_factory_after
}

//===================================================================
//	Dynamic attributes related methods
//===================================================================

//--------------------------------------------------------
/**
 * method : 		TangoLearn1ClassClass::create_static_attribute_list
 * description : 	Create the a list of static attributes
 *
 * @param	att_list	the ceated attribute list
 */
//--------------------------------------------------------
void TangoLearn1ClassClass::create_static_attribute_list(vector<Tango::Attr *> &att_list)
{
	for (unsigned long i=0 ; i<att_list.size() ; i++)
	{
		string att_name(att_list[i]->get_name());
		transform(att_name.begin(), att_name.end(), att_name.begin(), ::tolower);
		defaultAttList.push_back(att_name);
	}

	cout2 << defaultAttList.size() << " attributes in default list" << endl;

	/*----- PROTECTED REGION ID(TangoLearn1ClassClass::create_static_att_list) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::create_static_att_list
}


//--------------------------------------------------------
/**
 * method : 		TangoLearn1ClassClass::erase_dynamic_attributes
 * description : 	delete the dynamic attributes if any.
 *
 * @param	devlist_ptr	the device list pointer
 * @param	list of all attributes
 */
//--------------------------------------------------------
void TangoLearn1ClassClass::erase_dynamic_attributes(const Tango::DevVarStringArray *devlist_ptr, vector<Tango::Attr *> &att_list)
{
	Tango::Util *tg = Tango::Util::instance();

	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		Tango::DeviceImpl *dev_impl = tg->get_device_by_name(((string)(*devlist_ptr)[i]).c_str());
		TangoLearn1Class *dev = static_cast<TangoLearn1Class *> (dev_impl);

		vector<Tango::Attribute *> &dev_att_list = dev->get_device_attr()->get_attribute_list();
		vector<Tango::Attribute *>::iterator ite_att;
		for (ite_att=dev_att_list.begin() ; ite_att != dev_att_list.end() ; ++ite_att)
		{
			string att_name((*ite_att)->get_name_lower());
			if ((att_name == "state") || (att_name == "status"))
				continue;
			vector<string>::iterator ite_str = find(defaultAttList.begin(), defaultAttList.end(), att_name);
			if (ite_str == defaultAttList.end())
			{
				cout2 << att_name << " is a UNWANTED dynamic attribute for device " << (*devlist_ptr)[i] << endl;
				Tango::Attribute &att = dev->get_device_attr()->get_attr_by_name(att_name.c_str());
				dev->remove_attribute(att_list[att.get_attr_idx()], true, false);
				--ite_att;
			}
		}
	}
	/*----- PROTECTED REGION ID(TangoLearn1ClassClass::erase_dynamic_attributes) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::erase_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Method      : TangoLearn1ClassClass::get_attr_by_name()
 *	Description : returns Tango::Attr * object found by name
 */
//--------------------------------------------------------
Tango::Attr *TangoLearn1ClassClass::get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname)
{
	vector<Tango::Attr *>::iterator it;
	for (it=att_list.begin() ; it<att_list.end() ; ++it)
		if ((*it)->get_name()==attname)
			return (*it);
	//	Attr does not exist
	return NULL;
}


/*----- PROTECTED REGION ID(TangoLearn1ClassClass::Additional Methods) ENABLED START -----*/

/*----- PROTECTED REGION END -----*/	//	TangoLearn1ClassClass::Additional Methods
} //	namespace
