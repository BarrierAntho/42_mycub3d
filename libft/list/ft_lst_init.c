/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:48:15 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/18 12:49:45 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	**ft_lst_init(void)
{
	t_list	**list;

	list = (t_list **)malloc(sizeof(t_list *));
	if (!list)
	{
		ft_error("lst_init", "list", 0, ERR_MALLOC);
		return (NULL);
	}
	*list = NULL;
	return (list);
}
