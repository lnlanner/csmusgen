bin_PROGRAMS = csmusgen
csmusgen_SOURCES = csmusgen.cpp

# set the include path found by configure
INCLUDES= $(all_includes)

# the library search path.
csmusgen_LDFLAGS = $(all_libraries) 
noinst_HEADERS = editor.h formulaFunc.h classes.h addParam2.h addParam.h \
	controls.h counterpointFunc_act.h counterpointFunc_db.h counterpointFunc_dur.h \
	counterpointFunc_instr.h counterpointFunc_p10b.h counterpointFunc_p10.h counterpointFunc_p11b.h \
	counterpointFunc_p11.h counterpointFunc_p12b.h counterpointFunc_p12.h counterpointFunc_p13b.h \
	counterpointFunc_p13.h counterpointFunc_p14b.h counterpointFunc_p14.h counterpointFunc_p15b.h \
	counterpointFunc_p15.h counterpointFunc_p6b.h counterpointFunc_p6.h counterpointFunc_p7b.h \
	counterpointFunc_p7.h counterpointFunc_p8b.h counterpointFunc_p8.h counterpointFunc_p9b.h \
	counterpointFunc_p9.h counterpointFunc_pitch.h define.h inOut.h menu.h muses_string.h \
	preferences2.h preferences.h winFunc.h counterpointFunc.h mainpage.h
csmusgen_LDADD = -L/usr/X11R6/lib /usr/local/lib/libfltk.a -lX11
