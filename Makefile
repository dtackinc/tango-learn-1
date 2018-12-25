#=============================================================================
#
# file :        Makefile
#
# description : Makefile to generate a TANGO device server.
#
# project :     TangoLearn1Class
#
#=============================================================================
#                This file is generated by POGO
#        (Program Obviously used to Generate tango Object)
#=============================================================================
#
#
# MAKE_ENV is the path to find common environment to buil project
#
MAKE_ENV = /home/lprime/tango-9.2.5a/share/pogo/preferences

#=============================================================================
# PACKAGE_NAME is the name of the library/device/exe you want to build
#
PACKAGE_NAME = TangoLearn1Class
MAJOR_VERS   = 1
MINOR_VERS   = 0
RELEASE      = Release_$(MAJOR_VERS)_$(MINOR_VERS)

# #=============================================================================
# # RELEASE_TYPE
# # - DEBUG     : debug symbols - no optimization
# # - OPTIMIZED : no debug symbols - optimization level set to O2
# #-----------------------------------------------------------------------------
RELEASE_TYPE = DEBUG

#=============================================================================
# OUTPUT_TYPE can be one of the following :
#   - 'STATIC_LIB' for a static library (.a)
#   - 'SHARED_LIB' for a dynamic library (.so)
#   - 'DEVICE' for a device server (will automatically include and link
#            with Tango dependencies)
#   - 'SIMPLE_EXE' for an executable with no dependency (for exemple the test tool
#                of a library with no Tango dependencies)
#
OUTPUT_TYPE = DEVICE

#=============================================================================
# OUTPUT_DIR  is the directory which contains the build result.
# if not set, the standard location is :
#	- ./shlib if OUTPUT_TYPE is SHARED_LIB
#	- ./lib   if OUTPUT_TYPE is STATIC_LIB
#	- ./bin for others
#
#OUTPUT_DIR =


#=============================================================================
# INC_DIR_USER is the list of all include path needed by your sources
#   - for a device server, tango dependencies are automatically appended
#   - '-I ../include' and '-I .' are automatically appended in all cases
#
TANGOO_DIRECTORY = /home/lprime/13/tangoo
INC_DIR_USER= -I $(TANGOO_DIRECTORY)/include

#=============================================================================
# LIB_DIR_USER is the list of user library directories
#   - for a device server, tango libraries directories are automatically appended
#   - '-L ../lib' is automatically appended in all cases
#
LIB_DIR_USER=-L$(TANGOO_DIRECTORY)/lib -ltangoo

#=============================================================================
# LFLAGS_USR is the list of user link flags
#   - for a device server, tango libraries directories are automatically appended
#   - '-ldl -lpthread' is automatically appended in all cases
#
# !!! ATTENTION !!!
# Be aware that the order matters. 
# For example if you must link with libA, and if libA depends itself on libB
# you must use '-lA -lB' in this order as link flags, otherwise you will get
# 'undefined reference' errors
#
#LFLAGS_USR+=


#=============================================================================
# CXXFLAGS_USR lists the compilation flags specific for your library/device/exe
# This is the place where to put your compile-time macros using '-Dmy_macro'
#
# -DACE_HAS_EXCEPTIONS -D__ACE_INLINE__ for ACE
#
#CXXFLAGS_USR+= -Wall


#=============================================================================
# TANGO_REQUIRED 
# - TRUE  : your project depends on TANGO
# - FALSE : your project does not depend on TANGO
#-----------------------------------------------------------------------------
# - NOTE : if PROJECT_TYPE is set to DEVICE, TANGO will be auto. added
#-----------------------------------------------------------------------------  
TANGO_REQUIRED = TRUE



#=============================================================================
#	include Standard TANGO compilation options
#
include $(MAKE_ENV)/tango.opt

#=============================================================================
#	POST_PROCESSING: action to be done after normal make.
#	e.g.:  change executable file name, .....
#POST_PROCESSING = \
#	mv bin/$(BIN_DIR)/$(PACKAGE_NAME) bin/$(BIN_DIR)/$(PACKAGE_NAME)_DS

#=============================================================================
# SVC_OBJS is the list of all objects needed to make the output
#
SVC_INCL =  $(PACKAGE_NAME).h $(PACKAGE_NAME)Class.h 


SVC_OBJS =      \
		$(LIB_OBJS) \
		$(OBJDIR)/ClassFactory.o  \
        $(OBJDIR)/main.o

LIB_OBJS = \
        $(OBJDIR)/$(PACKAGE_NAME).o \
        $(OBJDIR)/$(PACKAGE_NAME)Class.o \
        $(OBJDIR)/$(PACKAGE_NAME)StateMachine.o \
        $(ADDITIONAL_OBJS) 

SVC_INHERITANCE_OBJ =  \

#=============================================================================
#	include common targets

SPECIFIC_ALL_TARGET = bin/client

include $(MAKE_ENV)/common_target.opt

#=============================================================================
bin/client: obj/client.o $(TANGOO_DIRECTORY)/lib/libtangoo.a
		@echo "Linking executable bin/client ..."
		$(CXX) obj/client.o $(ADDITIONAL_OBJS) $(LDFLAGS) -o bin/client


$(TANGOO_DIRECTORY)/lib/libtangoo.a:
		cd $(TANGOO_DIRECTORY)/lib; make

