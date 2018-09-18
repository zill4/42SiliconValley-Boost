/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:45:50 by jcrisp            #+#    #+#             */
/*   Updated: 2018/09/17 15:40:16 by jcrisp           ###   ########.fr       */
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

void ft_printabsolute(int d)
{
	if ( d < 0 )
		d * -1;
	ft_putnbr(d);
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

void ft_itoa_base(int value, int base)
{
		
}

int main()
{
	ft_putnbr(-2132830);
	
	return (0);
}
