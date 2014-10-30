/* find /usr/lib -name libm.a */
/* /usr/lib/x86_64-linux-gnu/libm.a */

/* calc.c can be compiled in the following 3 methods: */

/* gcc -Wall calc.c -o calc */
/* gcc -Wall calc.c /usr/lib/x86_64-linux-gnu/libm.a -o calc */
/* gcc -Wall calc.c -lm -o calc */

/* In general, the compiler option ‘-lNAME’ will attempt to link object files with a library file ‘libNAME.a’ in the standard library directories. Additional directories can specified with command-line options and environment variables, to be discussed shortly. A large program will typically use many ‘-l’ options to link libraries */



#include <math.h>
#include <stdio.h>

int
main (void)
{
  double x = sqrt (2.0);
  printf ("The square root of 2.0 is %f\n", x);
  return 0;
}
