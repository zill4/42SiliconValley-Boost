#include "ft_printf.h"


char to_hex(int64_t i)
{
	i = i % 10;
	return ('a' + i);
}

void ft_atoib(int64_t value, int base)
{
		int64_t div_c;
		int64_t mod_c;
	
		div_c = value;
		mod_c = value;
		div_c = div_c / base;
		mod_c = mod_c % base;
		
			if (div_c == 0 && mod_c == 0)
				return;
		ft_atoib(div_c, base);
			if (mod_c >= 10 && base > 10)
				ft_putchar(to_hex(mod_c));
			else
				ft_putnbr(mod_c);
}

