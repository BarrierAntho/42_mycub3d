/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:26:39 by abarrier          #+#    #+#             */
/*   Updated: 2022/09/29 19:27:21 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int	main(int argc, char **argv)
{
	t_game	game;
	t_list	**map_fd_lst;

	game.map_fd = FD_NOT_INIT;
	game.map_fd_lst = NULL;;
	game.map_tab = NULL;
	settings_init(&game.settings);
	map_fd_lst = ft_lst_init();
	if (!map_fd_lst )
		return (EXIT_FAILURE);
	game.map_fd_lst = map_fd_lst;
	// settings_show(&game.settings);
	if (parse(argc, argv, &game) != 0)
	{
		settings_free(&game.settings);
		ft_lst_free(game.map_fd_lst, &parse_map_fd_free);
		return (EXIT_FAILURE);
	}
	if (settings_check(&game.settings) != 0)
	{
		settings_free(&game.settings);
		ft_lst_free(game.map_fd_lst, &parse_map_fd_free);
		return (EXIT_FAILURE);
	}
	if (map(&game) != 0)
	{
		map_tab_free(&game);
		settings_free(&game.settings);
		ft_lst_free(game.map_fd_lst, &parse_map_fd_free);
		return (EXIT_FAILURE);
	}
	// settings_show(&game.settings);
	map_tab_free(&game);
	settings_free(&game.settings);
	ft_lst_free(game.map_fd_lst, &parse_map_fd_free);
	return (0);
}
