/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:45:50 by jcrisp            #+#    #+#             */
/*   Updated: 2018/09/20 08:58:37 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void ft_printf(char* strarg, ...)
{
	va_list valist;
	int i, k;
	int variables;
	char *flags = "scdipoux";
	node * head;
		
}

int main()
{
	void *d = 1234;
	printf("hello my name is paul%p\n", &d);
	ft_putchar('\n');
	ft_atoib((int64_t)&d, 16);
	ft_putchar('\n');
	return (0);
}
