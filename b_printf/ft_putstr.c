#include "ft_printf.h"

void ft_putstr(char* s, int *count)
{
	int i;

	i = 0;
	if (s == NULL)
		ft_putstr("(null)", count);
	else
		while(s[i])
			ft_putchar(s[i++], count);
}
