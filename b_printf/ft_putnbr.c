#include "ft_printf.h"

void ft_putnbr(int d)
{
	int sign;

	sign = 1;
	if (d < 0)
	{
		ft_putchar('-');
		sign = -1;
	}
	if(-9 <= d && d <= 9)
	{
		ft_putchar(d * sign + '0');
	}
	else
	{
		ft_putnbr((d / 10) * sign);
		ft_putnbr((d % 10) * sign);
	}
}
