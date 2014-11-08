CC=g++
SRCDIR=.
BUILDDIR=../build/hal
CFLAGS=-c -Wall

INC="../../src/lib" "../../src/lib/STL" "../../src/sys" "../../src/mcal"
INC_PARAMS=$(foreach d, $(INC), -I$d)

LIBCPPUTEST_DIR=/usr/local/Cellar/cpputest/3.6
LIBCPPUTEST_INCDIR=$(LIBCPPUTEST_DIR)/include

SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -maxdepth 1 -type f -name "*.$(SRCEXT)")
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))

all $(TARGET): $(OBJECTS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	@echo " CC $<"; $(CC) $(CFLAGS) $(INC_PARAMS) -I$(LIBCPPUTEST_INCDIR) -o $@ $<

clean:
	@echo " Cleaning hal/ ..."; $(RM) -r $(BUILDDIR) $(TARGET)

-include $(DEPS)

.PHONY: clean
