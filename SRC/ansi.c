/* The variable name asm is valid under the ANSI/ISO standard, but this program will not compile in GNU C because asm is a GNU C keyword extension (it allows native assembly instructions to be used in C functions). Consequently, it cannot be used as a variable name without giving a compilation error: */
/* $ gcc -Wall ansi.c */
/* ansi.c: In function ‘main’: */
/* ansi.c:6: parse error before ‘asm’ */
/* ansi.c:7: parse error before ‘asm’ */
/* In contrast, using the ‘-ansi’ option disables the asm keyword extension, and allows the program above to be compiled correctly: */
/* $ gcc -Wall -ansi ansi.c */
/* $ ./a.out */
/* the string asm is ’6502’ */

#include <stdio.h>

int
main (void)
{
  const char asm[] = "6502";
  printf ("the string asm is '%s'\n", asm);
  return 0;
}
