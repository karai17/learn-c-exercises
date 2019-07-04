# Compiler information
CC    := x86_64-w64-mingw32-gcc
CFLAGS = -Wall -Os

# Project directories
DDIR = ./dist
IDIR = ./include
LDIR = ./lib
ODIR = ./obj
SDIR = ./src

01_hello-world: $(SDIR)/01_hello-world.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

02_vars-types: $(SDIR)/02_vars-types.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

03_arrays: $(SDIR)/03_arrays.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

.PHONY: 01_hello-world 02_vars-types 03_arrays
