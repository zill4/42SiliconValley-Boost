/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lappend.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 07:58:40 by jcrisp            #+#    #+#             */
/*   Updated: 2018/09/20 08:00:13 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

node *ft_lappend(node *head, int data)
{
	node *rover;

	rover = head;
	while (rover->next)
		rover = rover->next;
	node *new_node = ft_lnew(data, NULL);
	rover->next = new_node;

	return (head);
}
