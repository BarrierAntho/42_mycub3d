/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:46:59 by abarrier          #+#    #+#             */
/*   Updated: 2022/09/29 20:05:32 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int	map_tab(t_game *game, t_list *map_obj)
{
	if (map_tab_init(game) != 0)
		return (EXIT_FAILURE);
	if (map_tab_create(game, map_obj) != 0)
		return (EXIT_FAILURE);
	if (map_tab_check(game->map_tab, game->settings.map_height,
		game->settings.map_width) != 0)
		return (EXIT_FAILURE);
//	map_tab_show(game->map_tab);
	return (0);
}
