/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:45:50 by jcrisp            #+#    #+#             */
/*   Updated: 2018/09/20 19:09:30 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

void isFlag(char c, va_list ap, int *count)
{
	if (c == 's')
		ft_putstr(va_arg(ap, char*), count);
	else if (c == 'c')
		ft_putchar(va_arg(ap, char), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (c == 'p'){
		ft_putstr("0x", count);
		ft_atoib(va_arg(ap, int64_t), 16, count);
	}
	else if (c == 'o')
		ft_atoib(va_arg(ap, int64_t), 8, count);
	else if (c == 'u')
		ft_atoib(va_arg(ap, int64_t), 10, count);
	else if (c == 'x')
		ft_atoib(va_arg(ap, int64_t), 16, count);

}

int b_printf(char* str, ...)
{
	va_list valist;
	int i;
	int count;

	count = 0;
	va_start(valist, str);
	i = 0;
	while(str[i])
	{
		if (str[i] == '%')
		{
			isFlag(str[i + 1], valist, &count);
			i++;
		}
		else
			ft_putchar(str[i], &count);
		i++;
	}

return count;
}


  int   main(void)
  {
    char            *str = "hello";
    char            chr = 'g';
    int                snum = -2466;
    int                psnum = 2466;
    unsigned int    unum = -444;
    unsigned int    xnum = -500;
    unsigned int    onum = -467;
    char            *empty = NULL;

    printf("mine = %d, actual = %d\n", b_printf("my   int (-d | +i):\t%d | %i\n", snum, psnum), printf("real int (-d | +i):\t%d | %i\n", snum, psnum));
    printf("\n");

    printf("mine = %d, actual = %d\n", b_printf("my   hex:\t\t%x\n", xnum), printf("real hex:\t\t%x\n", xnum));
    printf("\n");

    printf("mine = %d, actual = %d\n", b_printf("my   hex:\t\t%x\n", xnum*-1), printf("real hex:\t\t%x\n", xnum*-1));
    printf("\n");

    printf("mine = %d, actual = %d\n", b_printf("my   oct:\t\t%o\n", onum), printf("real oct:\t\t%o\n", onum));
    printf("\n");

    printf("mine = %d, actual = %d\n", b_printf("my   oct:\t\t%o\n", onum*-1), printf("real oct:\t\t%o\n", onum*-1));
    printf("\n");

    printf("mine = %d, actual = %d\n", b_printf("my   unsigned:\t\t%u\n", unum), printf("real unsigned:\t\t%u\n", unum));
    printf("\n");

    printf("mine = %d, actual = %d\n", b_printf("my   unsigned:\t\t%u\n", unum*-1), printf("real unsigned:\t\t%u\n", unum*-1));
    printf("\n");

    printf("mine = %d, actual = %d\n", b_printf("my   string:\t\t%s\n", str), printf("real string:\t\t%s\n", str));
    printf("\n");

    printf("mine = %d, actual = %d\n", b_printf("my   string:\t\t%c\n", chr), printf("real string:\t\t%c\n", chr));
    printf("\n");

    printf("mine = %d, actual = %d\n", b_printf("my   pointer:\t\t%p\n", str), printf("real pointer:\t\t%p\n", str));
    printf("\n");
    printf("real str empty:\t\t%s\n", empty);
    printf("mine = %d, actual = %d\n", b_printf("my   str empty:\t\t%s\n", empty), printf("real str empty:\t\t%s\n", empty));
    printf("\n");

    printf("\t\t\t---> my   length: %d <---\n", b_printf("%d %s %c %x  ~random-words./\'\\ %o %u %p\n", snum, str, chr, xnum, onum, unum, str));
    printf("\t\t\t---> real length: %d <---\n", printf("%d %s %c %x  ~random-words./\'\\ %o %u %p\n", snum, str, chr, xnum, onum, unum, str));
    printf("\n");

  	return (0);
  }
