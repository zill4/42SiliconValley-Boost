/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lprepend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 08:03:48 by jcrisp            #+#    #+#             */
/*   Updated: 2018/09/20 08:06:19 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

node *ft_lprepend(node *head, int data)
{
	node *new_node = ft_lnew(data, head);
	head = new_node;

	return (head);
}
