/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:44:34 by dbelinsk          #+#    #+#             */
/*   Updated: 2019/11/16 14:55:21 by dbelinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void			*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- > 0)
	{
		if ((unsigned char)c == (*(unsigned char*)s))
			return ((unsigned char*)s);
		s++;
	}
	return (NULL);
}
