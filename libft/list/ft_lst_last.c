/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 08:57:26 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/17 15:53:13 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_lst_last(t_list *lst)
{
	t_list	*obj;

	if (!lst)
		return (NULL);
	obj = lst;
	while (obj->next)
		obj = obj->next;
	return (obj);
}
