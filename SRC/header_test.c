
/* compile and run the output when miss some library header file */
/* comment out math.h, and compile in the following fashions: */
//
/* gcc badpow.c  */
/* gcc badpow.c -lm */
/* gcc -Wall badpow.c -lm */

#include <stdio.h>  
// #include <math.h>  

int
main (void)
{
  double x = pow (2.0, 3.0);
  printf ("Two cubed is %f\n", x);
  return 0;
}
