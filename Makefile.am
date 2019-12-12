## Process this file with automake to produce Makefile.in

INCLUDES = \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	@PACKAGE_CFLAGS@

bin_PROGRAMS = my-devis

my_devis_SOURCES = \
	main.c \
	support.c support.h \
	interface.c interface.h \
	callbacks.c callbacks.h \
	mes_devis_vol.c mes_devis_vol.h \
	mes_devis_hebergement.c mes_devis_hebergement.h \
	mes_devis_location.c mes_devis_location.h
my_devis_LDADD = @PACKAGE_LIBS@ $(INTLLIBS)

