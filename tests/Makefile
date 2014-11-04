package = ATTinyPlusPlusTests
version = 1.0

CC=g++
SRCDIR=.
BUILDDIR=./build
TARGET := $(BUILDDIR)/ATTinyPlusPlus_Tests
CFLAGS=-c -Wall

LIBCPPUTEST_DIR=/usr/local/Cellar/cpputest/3.6
LIBCPPUTEST_INCDIR=$(LIBCPPUTEST_DIR)/include
LIBCPPUTEST_LIBDIR=$(LIBCPPUTEST_DIR)/lib
LIBS=-lCppUTest -L$(LIBCPPUTEST_LIBDIR)

all $(TARGET): $(BUILDDIR)/AllTests.o
	cd app && $(MAKE) $@
	@echo " Linking..."; $(CC) $(LIBS) ./build/AllTests.o ./build/app/rpiswitch_tests.o -o $(TARGET)
	./$(TARGET) -c -v

clean:
	cd app && $(MAKE) $@
	@echo " Cleaning / ..."; $(RM) -r $(BUILDDIR) $(TARGET)

$(BUILDDIR)/AllTests.o: AllTests.cpp
	@mkdir -p $(BUILDDIR)
	@echo " CC $<"; $(CC) $(CFLAGS) -I$(LIBCPPUTEST_INCDIR) -o $@ $<

FORCE:

.PHONY: FORCE all dist check clean
