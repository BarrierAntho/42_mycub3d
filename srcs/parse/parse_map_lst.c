/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 08:39:15 by abarrier          #+#    #+#             */
/*   Updated: 2022/09/22 09:12:27 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int	parse_map_lst(t_game *game)
{
	t_list	*obj;

	if (!game)
		return (ft_panic(-1, __func__, ERR_NOOBJ));
	obj = *game->map_fd_lst;
	while (obj)
	{
		if (parse_map_lst_fullspace(game, obj) == 0)
		{
			if (parse_map_lst_line(game, obj) != 0)
				return (EXIT_FAILURE);
		}
		obj = obj->next;
	}
	return (0);
}
