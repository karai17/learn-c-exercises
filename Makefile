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

04_multi-arrays: $(SDIR)/04_multi-arrays.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

05_conditions: $(SDIR)/05_conditions.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

06_strings: $(SDIR)/06_strings.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

.PHONY:
	01_hello-world
	02_vars-types
	03_arrays
	04_multi-arrays
	05_conditions
	06_strings
