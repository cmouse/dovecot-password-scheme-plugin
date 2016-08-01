auth_moduledir = $(moduledir)/auth

AM_CPPFLAGS = \
	$(LIBDOVECOT_INCLUDE)

libpassword_scheme_plugin_la_LDFLAGS = -module -avoid-version

auth_module_LTLIBRARIES = \
	libpassword_scheme_plugin.la

libpassword_scheme_plugin_la_LIBADD = \
	$(LIBDOVECOT)

libpassword_scheme_plugin_la_SOURCES = \
	password-scheme-plugin.c

noinst_HEADERS = \
	password-scheme-plugin.h
