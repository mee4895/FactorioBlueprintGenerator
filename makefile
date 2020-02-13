#
# Main makefile
#

CC      := g++
CFLAGS  := -std=c++17 -g -Og -MMD -MP -Wall
LD      := g++
LDFLAGS :=

TARGET  := code
LIB     := -lz

SRCDIR  := src
SRCEXT  := cpp
OUTDIR  := out
OUTEXT  := o
INCDIR  := inc
INCEXT  := d
BINDIR  := bin

SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT) ! -wholename src/cpp-base64/test.cpp)
OBJECTS := $(patsubst $(SRCDIR)/%,$(OUTDIR)/%,$(SOURCES:.$(SRCEXT)=.$(OUTEXT)))


all: $(BINDIR)/$(TARGET)

$(BINDIR)/$(TARGET): $(OBJECTS)
	$(LD) $(LDFLAGS) $^ $(LIB) -o $@

$(OUTDIR)/%.$(OUTEXT): $(SRCDIR)/%.$(SRCEXT)
	@dirname $@ | xargs mkdir -p
	$(CC) $(CFLAGS) -I ./$(SRCDIR) -I ./$(INCDIR) -c $< -o $@

clean:
	rm -rf $(OUTDIR)/* $(BINDIR)/$(TARGET)

-include $(OBJECTS:%.$(OUTEXT)=%.$(INCEXT))
