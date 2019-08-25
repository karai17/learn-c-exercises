# Compiler information
CC    := x86_64-w64-mingw32-gcc
CFLAGS = -Wall -Wextra -pedantic -Os

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

07_for-loops: $(SDIR)/07_for-loops.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

08_while-loops: $(SDIR)/08_while-loops.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

09_functions: $(SDIR)/09_functions.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

10_static: $(SDIR)/10_static.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

11_pointers: $(SDIR)/11_pointers.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

12_structs: $(SDIR)/12_structs.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

13_function-args: $(SDIR)/13_function-args.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

14_dynamic-allocation: $(SDIR)/14_dynamic-allocation.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

15_arrays-and-pointers: $(SDIR)/15_arrays-and-pointers.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

16_recursion: $(SDIR)/16_recursion.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

17_linked-lists: $(SDIR)/17_linked-lists.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

18_binary-trees: $(SDIR)/18_binary-trees.c
	$(CC) -o $(DDIR)/$@ $^ $(CFLAGS)
	strip -s $(DDIR)/$@.exe
	$(DDIR)/$@

.PHONY: 01_hello-world 02_vars-types 03_arrays 04_multi-arrays 05_conditions 06_strings 07_for-loops 08_while-loops 09_functions 10_static 11_pointers 12_structs 13_function-args 14_dynamic-allocation 15_arrays-and-pointers 16_recursion 17_linked-lists 18_binary-trees
