#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void ft_atoib(int64_t value, int base);
void ft_putabsl(int value);
void ft_putnbr(int d);
void ft_putstr(char* s);
void ft_putchar(char c);

#endif
