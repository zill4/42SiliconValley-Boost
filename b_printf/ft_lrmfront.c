/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lrmfront.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 08:06:28 by jcrisp            #+#    #+#             */
/*   Updated: 2018/09/20 08:08:51 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

node *ft_lrmfront(node *head)
{
	node *front;
	
	front = head;

	head = head->next;
	front->next = NULL;

	if (front == head)
		head = NULL;
	free(front);
	return (head);
}
