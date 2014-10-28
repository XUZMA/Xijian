/* This error is not obvious at first sight, but can be detected by the compiler */
/* if the warning option ‘-Wall’ has been enabled. */

#include <stdio.h>

int
main (void)
{
  printf ("Two plus two is %f\n", 4);
  return 0;
}
