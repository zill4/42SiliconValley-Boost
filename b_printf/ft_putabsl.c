#include "ft_printf.h"

void	ft_putabsl(int value)
{
	if (value)
		ft_putnbr(value);
	else
		ft_putnbr(value*-1);
}
