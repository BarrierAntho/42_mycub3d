/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 08:47:50 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/16 10:02:29 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_lst_new(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
	{
		ft_error("lst_new", "new", 0, ERR_MALLOC);
		return (NULL);
	}
	if (!content)
		new->content = NULL;
	else
		new->content = content;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}
