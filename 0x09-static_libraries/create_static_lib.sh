#!/bin/bash

# Compile all .c files into .o object files
gcc -c *.c

# Create the static library liball.a from all .o files
ar rcs liball.a *.o

# Clean up: remove all .o files after creating the library
rm *.o
