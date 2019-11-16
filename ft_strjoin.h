/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 12:54:54 by dbelinsk          #+#    #+#             */
/*   Updated: 2019/11/16 12:54:55 by dbelinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRJOIN_H
# define FT_STRJOIN_H
# include <string.h>
# include <stdlib.h>

size_t		ft_strlen(const char *s);
void		*ft_calloc(size_t count, size_t size);
size_t		*ft_strlcat(void *dst, const void *src, size_t dstsize);

#endif
