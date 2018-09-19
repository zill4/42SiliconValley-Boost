/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:45:50 by jcrisp            #+#    #+#             */
/*   Updated: 2018/09/19 16:21:13 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putstr(char* s)
{
	int i; 
	
	i = 0;
	while(s[i++])
		ft_putchar(s[i]);		
}

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

char	to_hex(int64_t i)
{
	i = i % 10;
	return ('a' + i);
}

int	ft_putabsl(int value)
{
	if (value)
		ft_putnbr(value);
	else
		ft_putnbr(value*-1);
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

void ft_printf(char* flags, ...)
{
			
}
int main()
{
	void *d = 1234;
	printf("hello my name is paul%p\n", &d);
	ft_putchar('\n');
	ft_atoib(&d, 16);
	ft_putchar('\n');
	return (0);
}
