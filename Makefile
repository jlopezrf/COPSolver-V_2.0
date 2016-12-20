# Makefile
.PRECIOUS: %.cc %.h %.d
SUFFIXES += .d .cc .x10

#We don't need to clean up when we're making these targets
NODEPS=inc full rsync clean

#RT=sockets
RT=mpi


PROJECT=cpls

SOURCES_X10=$(shell find $(PROJECT)/ -name "*.x10")
SOURCES_CPP=$(SOURCES_X10:.x10=.cc)
DEPFILES=$(SOURCES_CPP:.cc=.d)
OBJS=$(SOURCES_CPP:.cc=.o)



X10_FLAGS=-NO_CHECKS -O -x10rt $(RT)

ifeq ($(RT),sockets)
  CXX=g++
  CXXFLAGS_RT=-DTRANSPORT=sockets
else
  CXX=mpicxx
  CXXFLAGS_RT=-DNO_TRACING 
endif


CXX_X10_INCLUDE=-I${X10_HOME}/include -I${X10_HOME}/stdlib/include

CXXFLAGS_DEFS=-Wno-long-long -Wno-unused-parameter -DHOMOGENEOUS -DX10_USE_BDWGC -pthread $(CXX_X10_INCLUDE) -I. $(CXXFLAGS_RT)


CXXFLAGS_OPT=-O2 -DNO_CHECKS -finline-functions 
#CXXFLAGS_OPT=-O3 -DNO_CHECKS -finline-functions -fomit-frame-pointer 
#CXXFLAGS_OPT=-g -Wno-unused-variable -Wno-unused-but-set-variable -Wall
CXXFLAGS=$(CXXFLAGS_DEFS) $(CXXFLAGS_OPT)

LDFLAGS=-Wl,--no-as-needed -pthread

LIBS=-L${X10_HOME}/stdlib/lib -lx10 -lgc -lm -lpthread -lrt -ldl -L${X10_HOME}/lib -lx10rt_$(RT) -Wl,--rpath -Wl,${X10_HOME}/stdlib/lib -Wl,--rpath -Wl,${X10_HOME}/lib -Wl,-export-dynamic


inc: rsync
	$(MAKE) Main

full: rsync
	$(MAKE) compile Main

rsync:
	rsync -av src/$(PROJECT) .
	rm -rf /tmp/src_x10_*

compile: 
	@echo sources $(SOURCES_X10)
	export tmp=`mktemp -d --tmpdir=/tmp 'src_x10_XXXXXX'`; \
	x10c++ $(X10_FLAGS) -commandlineonly -c -d $$tmp $(SOURCES_X10) && \
	rsync -cva $$tmp/$(PROJECT) .



#Don't create dependencies when we're cleaning, for instance
ifdef MAKECMDGOALS
ifeq (0, $(words $(findstring $(MAKECMDGOALS), $(NODEPS))))
    #Chances are, these files don't exist.  GMake will create them and
    #clean up automatically afterwards
    -include $(DEPFILES)
endif
endif

# some .x10 files do not produce .cc output (type defs). 
# in that case create an empty .cc file
%.cc: %.x10
	export tmp=`mktemp -d --tmpdir=/tmp 'src_x10_XXXXXX'`; \
	x10c++ $(X10_FLAGS) -commandlineonly -c -d $$tmp $< && \
	if [ -f $$tmp/$@ ]; then rsync -cva $$tmp/$(PROJECT) .; else touch $@; fi

# do not pass -I for x10 includes else they are added by -MM in the .d files
%.d: %.cc
	g++ -I. -MM -MF $@ -MT $(@D)/`basename $@ .d`.o  $<

%.o: %.cc %.d
	$(CXX) $(CXXFLAGS) -c $< -o $@



xxx_main_xxx.cc:
	@echo '#include <cpls/Main.h>' > xxx_main_xxx.cc
	@echo '#include <x10aux/bootstrap.h>' >>xxx_main_xxx.cc
	@echo 'extern "C" { int main(int ac, char **av) { return ::x10aux::template_main< ::cpls::Main>(ac,av); } }' >>xxx_main_xxx.cc


Main: $(OBJS) xxx_main_xxx.o
	$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS)



clean:
	rm -rf Main xxx_main_xxx.cc *.inc *~ /tmp/src_x10_*
	find $(PROJECT) \( -name '*.cc' -o -name '*.h' -o -name '*.o' -o -name '*.d' \) -exec rm \{} \;
