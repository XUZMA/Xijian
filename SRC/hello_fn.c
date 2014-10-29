// Related files: hello_fn.c  hello.h  hello_main.c
//
// Compile as follows:
// gcc -Wall hello_fn.c hello_main.c
//         or
// gcc -Wall hello_main.c hello_fn.c



#include <stdio.h>
#include "hello.h"

void 
hello (const char * name)
{
  printf ("Hello, %s!\n", name);
}
