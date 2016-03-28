AM_CFLAGS = -I$(top_srcdir)/src/bin -I$(top_srcdir)/src/lib -std=c99 -Wall

bin_PROGRAMS = isthirteen-test
isthirteen_test_SOURCES = main.c

isthirteen_test_LDADD = $(top_builddir)/src/lib/libisthirteen.la $(AM_LDFLAGS)
