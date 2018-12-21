#
# Main makefile
#

CC        := g++
CFLAGS    := -std=c++17 -Wall

TARGET    := code
LIB       :=

SRCDIR    := src
SRCEXT    := cpp
OUTDIR    := out
OUTEXT    := o
BINDIR    := bin
INCDIR    := inc
DOCDIR    := doc

SOURCES   := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT) ! -wholename src/cpp-base64/test.cpp)
OBJECTS   := $(patsubst $(SRCDIR)/%,$(OUTDIR)/%,$(SOURCES:.$(SRCEXT)=.$(OUTEXT)))

all: LIB := $(LIB) -lz
all: $(BINDIR)/$(TARGET)

dbbs: CFLAGS := $(CFLAGS) -D'DONT_BUILD_BLUEPRINT_STRING'
dbbs: $(BINDIR)/$(TARGET)

$(BINDIR)/$(TARGET): $(OBJECTS)
	$(CC) $^ $(LIB) -o $@

$(OUTDIR)/%.$(OUTEXT): $(SRCDIR)/%.$(SRCEXT)
	@dirname $@ | xargs mkdir -p
	$(CC) $(CFLAGS) -I ./$(SRCDIR) -I ./$(INCDIR) -c $< -o $@

clean:
	rm -r $(OUTDIR)/* $(BINDIR)/$(TARGET)
