/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 12:54:37 by dbelinsk          #+#    #+#             */
/*   Updated: 2019/11/16 17:22:35 by dbelinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPLIT_H
# define FT_SPLIT_H
# include <string.h>
# include <stdlib.h>

void		*ft_memset(void *b, int c, size_t len);
size_t		ft_strlen(const char *s);
char		*ft_strtrim(const char *s1, const char *set);
char		*ft_calloc(size_t count, size_t size);
char		*ft_memccpy(void *dst, const void *src, int c, size_t n);
char		*ft_strncpy(char *dst, const char *src, size_t n);

#endif
