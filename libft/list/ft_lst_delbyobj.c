/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_delbyobj.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:31:55 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/17 08:23:41 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_lst_delbyobj(t_list *obj, void (*f)(void *))
{
	t_list	*prev;
	t_list	*next;

	if (!obj)
	{
		ft_error("lst_delbyobj", "obj", 0, ERR_NOOBJ);
		return (NULL);
	}
	prev = obj->prev;
	next = obj->next;
	if (prev)
	{
		prev->next = next;
		if (next)
			next->prev = prev;
	}
	else if (next)
		next->prev = NULL;
	if (f)
		(f)(obj->content);
	free(obj);
	obj = NULL;
	return (next);
}
