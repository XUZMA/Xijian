// Related files: hello_fn.c  hello.h  hello_main.c
//
// Compile all the files altogether:
// gcc -Wall hello_fn.c hello_main.c
//         or
// gcc -Wall hello_main.c hello_fn.c
//
// Compile the files individually:
// gcc -Wall -c main.c
// gcc -Wall -c hello_fn.c
// gcc main.o hello_fn.o -o hello (conventional usage)
// gcc hello_fn.o main.o -o hello (nowadays legitimate)
//
// On Unix-like systems, the traditional behavior of compilers and linkers is to search for external functions from left to right in the object files specified on the command line. This means that the object file which contains the definition of a function should appear after any files which call that function.
// Most current compilers and linkers will search all object files, regardless of order, but since not all compilers do this it is best to follow the convention of ordering object files from left to right.


#include <stdio.h>
#include "hello.h"

void 
hello (const char * name)
{
  printf ("Hello, %s!\n", name);
}
