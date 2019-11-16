/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 19:05:29 by dbelinsk          #+#    #+#             */
/*   Updated: 2019/11/16 20:05:14 by dbelinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!*alst)
	{	
		*alst = new;
		return ;
	}
	while ((*alst)->next)
		(*alst) = (*alst)->next;
	(*alst)->next = new;
}
