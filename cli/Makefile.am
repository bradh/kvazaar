bin_PROGRAMS = kvazaar

kvazaar_SOURCES = \
	cli.c \
	yuv_io.c \
	encmain.c

kvazaar_LDADD = ../src/libkvazaar.la $(LIBS)

if USE_CRYPTOPP
kvazaar_LINK = $(LIBTOOL) $(AM_V_lt) --tag=CXX $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) $(CXXFLAGS) \
	$(AM_LDFLAGS) $(LDFLAGS) -o $@
else
kvazaar_LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(AM_LDFLAGS) $(LDFLAGS) -o $@
endif
