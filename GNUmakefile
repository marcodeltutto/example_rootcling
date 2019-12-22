HEADERS = example.h
SOURCES = example.cxx

CXXFLAGS +=  `root-config --cflags`
CXXFLAGS += -g -O3 -std=c++17 -W -Wall -Wno-deprecated -fPIC -D_CORE_$(shell uname -s)_

INCFLAGS  = -I. 
INCFLAGS += $(shell python-config --includes)
INCFLAGS += -I$(shell python -c "import numpy; print numpy.get_include()")

LDFLAGS += -L$(shell python-config --prefix)/lib/
LDFLAGS += $(shell python-config --ldflags)

all : MyDict.cxx libMyLib.so

MyDict.cxx: $(HEADERS) LinkDef.h
	rootcling -f $@ -c $(CXXFLAGS) $(INCFLAGS) -p $^


libMyLib.so: MyDict.cxx $(SOURCES)
	g++ -shared -o$@ $(CXXFLAGS)  `root-config --ldflags` $(LDFLAGS) -I$(ROOTSYS)/include $(INCFLAGS) $^
