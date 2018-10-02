#include "printf.h"
#include <stdio.h>
#include <limits.h>

int   main(void)
{
  char            *str = "hello";
  char            chr = 'g';
  int                snum = -2466;
  int                psnum = 2466;
  unsigned int    unum = -444444;
  unsigned int    xnum = -42;
  unsigned int    onum = -120;
  char            *empty = NULL;

  ft_printf("%p\n\n\n\n\n", 00);
  printf("mine = %d, actual = %d\n", ft_printf("my   int (-d | +i):\t%d | %i\n", snum, psnum), printf("real int (-d | +i):\t%d | %i\n", snum, psnum));
  printf("\n");

  printf("mine = %d, actual = %d\n", ft_printf("my   hex:\t\t%x\n", UINT_MAX), printf("real hex:\t\t%x\n", UINT_MAX));
  printf("\n");

  printf("mine = %d, actual = %d\n", ft_printf("my   hex:\t\t%x\n", xnum*-1), printf("real hex:\t\t%x\n", xnum*-1));
  printf("\n");

  printf("mine = %d, actual = %d\n", ft_printf("my   oct:\t\t%o\n", UINT_MAX), printf("real oct:\t\t%o\n", UINT_MAX));
  printf("\n");

  printf("mine = %d, actual = %d\n", ft_printf("my   oct:\t\t%o\n", onum*-1), printf("real oct:\t\t%o\n", onum*-1));
  printf("\n");

  printf("mine = %d, actual = %d\n", ft_printf("my   unsigned:\t\t%u\n", UINT_MAX  ), printf("real unsigned:\t\t%u\n", UINT_MAX  ));
  printf("\n");

  printf("mine = %d, actual = %d\n", ft_printf("my   unsigned:\t\t%u\n", unum*-1), printf("real unsigned:\t\t%u\n", unum*-1));
  printf("\n");

  printf("mine = %d, actual = %d\n", ft_printf("my   string:\t\t%s\n", str), printf("real string:\t\t%s\n", str));
  printf("\n");

  printf("mine = %d, actual = %d\n", ft_printf("my   string:\t\t%c\n", chr), printf("real string:\t\t%c\n", chr));
  printf("\n");

  printf("mine = %d, actual = %d\n", ft_printf("my   pointer:\t\t%p\n", str), printf("real pointer:\t\t%p\n", str));
  printf("\n");

  printf("mine = %d, actual = %d\n", ft_printf("my   str empty:\t\t%s\n", empty), printf("real str empty:\t\t%s\n", empty));
  printf("\n");

  printf("\t\t\t---> my   length: %d <---\n", ft_printf("%d %s %c %x  ~random-words./\'\\ %o %u %p\n", snum, str, chr, xnum, onum, unum, str));
  printf("\t\t\t---> real length: %d <---\n", printf("%d %s %c %x  ~random-words./\'\\ %o %u %p\n", snum, str, chr, xnum, onum, unum, str));
  printf("\n");

  printf("size long long int: %zu size long long: %zu \n", sizeof(unsigned long long int), sizeof(unsigned long long));
   return (0);
}