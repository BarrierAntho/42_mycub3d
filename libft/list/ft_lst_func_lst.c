/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_func_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:16:15 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/20 12:49:42 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_lst_func_lst(t_list **list, void (*f)(void *))
{
	t_list	*obj;

	if (!list)
	{
		ft_error("lst_show", "list", 0, ERR_NOOBJ);
		return ;
	}
	obj = *list;
	while (obj)
	{
		if (f)
			(f)(obj->content);
		obj = obj->next;
	}
}
