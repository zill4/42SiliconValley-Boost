#include "ft_printf.h"

void ft_putchar(char c, int *count)
{
	*count += 1;
	write(1,&c, 1);

}
