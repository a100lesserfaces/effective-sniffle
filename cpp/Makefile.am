ossieName = test_component
bindir = $(prefix)/dom/components/test_component/cpp/
bin_PROGRAMS = test_component

xmldir = $(prefix)/dom/components/test_component/
dist_xml_DATA = ../test_component.scd.xml ../test_component.prf.xml ../test_component.spd.xml
ACLOCAL_AMFLAGS = -I m4 -I${OSSIEHOME}/share/aclocal/ossie
AUTOMAKE_OPTIONS = subdir-objects



distclean-local:
	rm -rf m4
	rm -f config.*
	rm -rf autom4te.cache
	rm -f acinclude.m4
	rm -f aclocal.m4
	rm -f configure
	rm -f depcomp
	rm -f install-sh
	rm -f ltmain.sh
	rm -f Makefile.in
	rm -f missing
	rm -rf .deps


# Sources, libraries and library directories are auto-included from a file
# generated by the REDHAWK IDE. You can remove/modify the following lines if
# you wish to manually control these options.
include $(srcdir)/Makefile.am.ide
test_component_SOURCES = $(redhawk_SOURCES_auto)
test_component_LDADD = $(SOFTPKG_LIBS) $(PROJECTDEPS_LIBS) $(BOOST_LDFLAGS) $(BOOST_THREAD_LIB) $(BOOST_REGEX_LIB) $(BOOST_SYSTEM_LIB) $(INTERFACEDEPS_LIBS) $(redhawk_LDADD_auto)
test_component_CXXFLAGS = -Wall $(SOFTPKG_CFLAGS) $(PROJECTDEPS_CFLAGS) $(BOOST_CPPFLAGS) $(INTERFACEDEPS_CFLAGS) $(redhawk_INCLUDES_auto)
test_component_LDFLAGS = -Wall $(redhawk_LDFLAGS_auto)
test_component_CXXFLAGS += -I/usr/local/include/libSpeedyDisk
test_component_LDFLAGS += -lSpeedyDisk

