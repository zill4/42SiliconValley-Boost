/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 09:51:33 by jcrisp            #+#    #+#             */
/*   Updated: 2018/09/13 15:16:55 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (len-- && dst[i])
	{
		if (!src)
		{
			dst[i] = '\0';
		}
		else
		{
			dst[i] = *src;
			src++;
		}
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
