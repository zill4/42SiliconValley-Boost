#include "ft_printf.h"

void	ft_putabsl(int value)
{
	unsigned val;

	if (value)
		ft_putnbr(value);
	else
	{
		val = value + 4294967234 + 1;
		ft_putnbr(val);
	}
}
