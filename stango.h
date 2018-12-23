// macros and utilities to support development

#define STANGO_S1(x) #x
#define STANGO_S2(x) STANGO_S1(x)
#define STANGO_LOCATION std::string(__PRETTY_FUNCTION__) + " in " + std::string(__FILE__) + "@" + std::string(STANGO_S2(__LINE__))

#define STANGO(STATEMENT) \
try \
{ \
  STATEMENT; \
} \
catch (DevFailed &e) \
{ \
  string origin = STANGO_LOCATION; \
  Tango::Except::re_throw_exception(e, "rethrow", #STATEMENT, origin); \
}
