/* $ gcc -Wall hello.c -o hello */
/* This compiles the source code in ‘hello.c’ to machine code and stores */
/* it in an executable file ‘hello’. The output file for the machine code is */
/* specified using the ‘-o’ option. This option is usually given as the last */
/* argument on the command line. If it is omitted, the output is written to */
/* a default file called ‘a.out’. */
/* The option ‘-Wall’ turns on all the most commonly-used compiler */
/* warnings—it is recommended that you always use this option! */


#include <stdio.h>

int
main (void)
{
  printf ("Hello, world!\n");
  return 0;
}
