CC=g++
SRCDIR=.
BUILDDIR=../build/hal
CFLAGS=-c -Wall -std=c++0x

INC="../../src/lib" "../../src/lib/STL" "../../src/sys" "../../src/mcal"
INC_PARAMS=$(foreach d, $(INC), -I$d)

LIBCPPUTEST_DIR=/usr/local/Cellar/cpputest/3.6
LIBCPPUTEST_INCDIR=$(LIBCPPUTEST_DIR)/include

# SRCEXT := cpp
# SOURCES := $(shell find $(SRCDIR) -maxdepth 1 -type f -name "*.$(SRCEXT)")
# OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))

all $(TARGET): $(BUILDDIR)/PWMLed.o $(BUILDDIR)/PWMLed_tests.o

$(BUILDDIR)/PWMLed.o: ../../src/hal/PWMLed.cpp
	@echo "CC $<"; $(CC) $(CFLAGS) $(INC_PARAMS) -I$(LIBCPPUTEST_INCDIR) -o $@ $<
# $(BUILDDIR)/
# $(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
# 	@mkdir -p $(BUILDDIR)
# 	@echo " CC $<"; $(CC) $(CFLAGS) $(INC_PARAMS) -I$(LIBCPPUTEST_INCDIR) -o $@ $<

$(BUILDDIR)/PWMLed_tests.o: PWMLed_tests.cpp
	@echo "CC $<"; $(CC) $(CFLAGS) $(INC_PARAMS) -I$(LIBCPPUTEST_INCDIR) -o $@ $<


clean:
	@echo " Cleaning hal/ ..."; $(RM) -r $(BUILDDIR) $(TARGET)

-include $(DEPS)

.PHONY: clean
