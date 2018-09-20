/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lnew.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 08:01:50 by jcrisp            #+#    #+#             */
/*   Updated: 2018/09/20 08:03:40 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

node *ft_lnew(int data, node *next)
{
	node *new_node;

	new_node = (node *)malloc(sizeof(node));
	if (new_node == NULL)
	{
		write(1, "Error Creating a new node.\n",27);
		exit(0);
	}
	new_node->data = data;
	new_node->next = next;

	return (new_node);
}
