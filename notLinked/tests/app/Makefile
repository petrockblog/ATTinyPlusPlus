CC=g++
SRCDIR=.
BUILDDIR=../build/app
CFLAGS=-c -Wall -std=c++0x

INC="../../src/lib" "../../src/lib/STL" "../../src/sys" "../../src/mcal" "../../src/hal"
INC_PARAMS=$(foreach d, $(INC), -I$d)

LIBCPPUTEST_DIR=/usr/local/Cellar/cpputest/3.6
LIBCPPUTEST_INCDIR=$(LIBCPPUTEST_DIR)/include

all $(TARGET): $(BUILDDIR)/Powerswitch.o $(BUILDDIR)/PowerswitchState.o $(BUILDDIR)/PowerswitchState_tests.o

$(BUILDDIR)/PowerswitchState.o: ../../src/app/PowerswitchState.cpp
	@echo "CC $<"; $(CC) $(CFLAGS) $(INC_PARAMS) -I$(LIBCPPUTEST_INCDIR) -o $@ $<

$(BUILDDIR)/Powerswitch.o: ../../src/app/Powerswitch.cpp
	@echo "CC $<"; $(CC) $(CFLAGS) $(INC_PARAMS) -I$(LIBCPPUTEST_INCDIR) -o $@ $<

$(BUILDDIR)/PowerswitchState_tests.o: PowerswitchState_tests.cpp
	@echo "CC $<"; $(CC) $(CFLAGS) $(INC_PARAMS) -I$(LIBCPPUTEST_INCDIR) -o $@ $<

clean:
	@echo " Cleaning hal/ ..."; $(RM) -r $(BUILDDIR) $(TARGET)

-include $(DEPS)

.PHONY: clean
