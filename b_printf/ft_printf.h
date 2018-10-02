#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

void ft_atoib(long value, int base, int *count);
void ft_putnbr(long d, int *count);
void ft_putstr(char* s, int *count);
void ft_putchar(char c, int *count);

#endif
