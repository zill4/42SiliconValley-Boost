#include "ft_printf.h"

void ft_putnbr(long d, int *count)
{
	int64_t sign;
	sign = 1;
	if (d < 0)
	{
		ft_putchar('-', count);
		sign = -1;
	}

	if(-9 <= d && d <= 9)
	{
		ft_putchar(d * sign + '0', count);
	}
	else
	{
		ft_putnbr((d / 10) * sign, count);
		ft_putnbr((d % 10) * sign, count);
	}
}
