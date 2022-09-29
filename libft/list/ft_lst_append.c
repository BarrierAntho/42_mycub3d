/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:07:14 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/17 16:11:35 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_lst_append(t_list **lst, void *content)
{
	t_list	*last;
	t_list	*new;

	if (!lst)
	{
		ft_error("lst_append", "lst", 0, ERR_NOOBJ);
		return (NULL);
	}
	last = ft_lst_last(*lst);
	new = ft_lst_new(content);
	if (!new)
		return (NULL);
	if (last)
	{
		last->next = new;
		new->prev = last;
	}
	else
		*lst = new;
	return (new);
}
