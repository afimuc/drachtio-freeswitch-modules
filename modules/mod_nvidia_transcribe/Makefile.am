include $(top_srcdir)/build/modmake.rulesam
MODNAME=mod_nvidia_transcribe

mod_LTLIBRARIES = mod_nvidia_transcribe.la
mod_nvidia_transcribe_la_SOURCES  = mod_nvidia_transcribe.c nvidia_glue.cpp 
mod_nvidia_transcribe_la_CFLAGS   = $(AM_CFLAGS)
mod_nvidia_transcribe_la_CXXFLAGS = -I $(top_srcdir)/libs/riva-asr-grpc-api/stubs $(AM_CXXFLAGS) -std=c++11

mod_nvidia_transcribe_la_LIBADD   = $(switch_builddir)/libfreeswitch.la
mod_nvidia_transcribe_la_LDFLAGS  = -avoid-version -module -no-undefined -shared `pkg-config --libs grpc++ grpc`

