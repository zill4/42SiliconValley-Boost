/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:45:50 by jcrisp            #+#    #+#             */
/*   Updated: 2018/09/20 18:22:37 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void isFlag(char c, va_list ap)
{
	if (c == 's')
		ft_putstr(va_arg(ap, char*));
	else if (c == 'c')
		ft_putchar(va_arg(ap, char));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int));
	else if (c == 'p'){
		ft_putstr("0x");
		ft_atoib(va_arg(ap, int64_t), 16);
	}
	else if (c == 'o')
		ft_atoib(va_arg(ap, int), 8);	
	else if (c == 'u')
		ft_putabsl(va_arg(ap, int));
	else if (c == 'x')
		ft_atoib(va_arg(ap, int), 16);
	else
		ft_putchar(c);
		
}

void ft_printf(char* str, ...)
{
	va_list valist;
	int i;

	va_start(valist, str);
	i = 0;
	while(str[i])
	{
		if (str[i] == '%')
		{
			isFlag(str[i + 1], valist);
			i++;
		}
		else
			ft_putchar(str[i]);
		i++;
	}	

}

int main()
{
	void *d = 1234;
	printf("hello my name is paul%p\n", &d);
	ft_printf("hello my name is paul%p\n", &d);
	ft_putchar('\n');
	ft_atoib((int64_t)&d, 16);
	ft_putchar('\n');
	return (0);
}
