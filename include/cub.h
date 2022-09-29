/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:12:32 by abarrier          #+#    #+#             */
/*   Updated: 2022/09/29 20:05:48 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_H
# define CUB_H

# include <errno.h>
# include <fcntl.h>
# include <math.h>
# include <stdio.h>
# include <string.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

# include "ft_libft.h"

// MAP FILE SETTINGS
# define FD_NOT_INIT -99999999
# define MAP_FORMAT ".cub"
# define MAP_CHARSET "01NSEW "
# define MAP_COLOR_SEP ','
# define MAP_TEXT_FORMAT ".xpm"
# define MAP_TEXT_NO "NO "
# define MAP_TEXT_SO "SO "
# define MAP_TEXT_WE "WE "
# define MAP_TEXT_EA "EA "
# define MAP_TEXT_F "F "
# define MAP_TEXT_C "C "
# define MAP_FILE_MIN_LINE 9
# define MAP_SIZE_MIN 3
# define PLAYER_SP_CHARSET "NSEW"

// MESSAGES
# define ERR_MAP_CHAR "Forbidden char. Expected charset \"01NSEW \""
# define ERR_MAP_CLOSURE "Map is not enclose by wall"
# define ERR_MAP_COLOR_CHAR "Forbidden char. Expected numeric value 0-255"
# define ERR_MAP_COLOR_DEF "Wrong rgb definition. Expected 3 values 0-255"
# define ERR_MAP_COLOR_VAL "Wrong color value. Expected numeric value 0-255"
# define ERR_MAP_CONTENT "No valid map definition. Expected minimum 8 line"
# define ERR_MAP_DUP_TEXT "Duplicate texture in the map file. Expected only one"
# define ERR_MAP_FORMAT "Wrong map format. Expected \".cub\""
# define ERR_MAP_NONE "No map definition, Expected minimum 3 map line"
# define ERR_MAP_ORDER "Wrong map order. Expected map at the end"
# define ERR_MAP_PLAYER_SP "No player spawn. Expected only one N,S,E or W"
# define ERR_MAP_PLAYER_DUP "Multiple player spawn. Expected only one N,S,E or W"
# define ERR_MAP_SIZE_MIN "Invalid map size. Expected minimum 3 map line"
# define ERR_MAP_SPACE_IN "Space line in between map definition. Expected none"
# define ERR_MAP_TXT_TYPE "One of texture or rgb value is not correct"
# define ERR_MAP_TXT_FORMAT "Wrong texture format. Expected \".xpm\""

enum e_texture_type
{
	NONE,
	NO,
	SO,
	WE,
	EA,
	F,
	C,
	MAP
};

typedef struct s_settings
{
	char	*no;
	char	*so;
	char	*we;
	char	*ea;
	int		f_r;
	int		f_g;
	int		f_b;
	int		c_r;
	int		c_g;
	int		c_b;
	int		fd_no;
	int		fd_so;
	int		fd_we;
	int		fd_ea;
	int		no_line_no;
	int		so_line_no;
	int		we_line_no;
	int		ea_line_no;
	int		f_line_no;
	int		c_line_no;
	int		map_start_line_no;
	int		map_end_line_no;
	int		map_width;
	int		map_height;
	int		map_player_sp_val;
	int		map_player_sp_x;
	int		map_player_sp_y;
}	t_settings;

typedef struct s_map_fd
{
	int		line_no;
	char*	line;
}	t_map_fd;

typedef struct s_game
{
	int			map_fd;
	t_list		**map_fd_lst;
	int			**map_tab;
	t_settings	settings;
	void		*mlx;
} t_game;

// PARSING
int     	parse_arg(int argc);
int     	parse(int argc, char **argv, t_game *game);
int     	parse_map_fd(char *filename, t_game *game);
void		parse_map_fd_free(void *content);
t_map_fd   *parse_map_fd_init(int line_no, char *line);
void    	parse_map_fd_show(void *content);
int     	parse_map_lst(t_game *game);
int     	parse_map_lst_check(t_game *game, int txt_type, t_map_fd *map, char *value);
int     	parse_map_lst_fullspace(t_game *game, t_list *obj);
char    	*parse_map_lst_get_value(int txt_type, char *str);
int     	parse_map_lst_line(t_game *game, t_list *obj);
int     	parse_map_lst_line_txt_type(char *line);
void    	parse_read_file(t_game *game);

// SETTINGS
int		settings_check(t_settings *settings);
int		settings_check_map_order(t_settings *settings);
int		settings_check_map_start_line(t_settings *settings);
int		settings_check_map_size_min(t_settings *settings);
int		settings_check_txt_type(t_settings *settings);
void		settings_free(t_settings *settings);
void		settings_free_close_fd(int *fd);
void		settings_init(t_settings *settings);
void		settings_init_map(t_settings *settings);
int     	settings_rgb(t_game *game, int txt_type, char *rgb);
int     	settings_rgb_check(char **rgb_lst, int *rgb_tab);
int     	settings_rgb_check_char(char *str);
int     	settings_rgb_check_dup(t_game *game, int txt_type);
int     	settings_rgb_check_space(char *str);
int     	settings_rgb_check_value(char *str, int *tab_i);
void		settings_rgb_rm_space_end(char **rgb_lst);
void		settings_rgb_set_line_no(t_game *game, int txt_type, t_map_fd *map);
void		settings_rgb_set_value(t_game *game, int txt_type, int *rgb_tab);
void		settings_rgb_set_value_type(int *r, int *g, int *b, int *rgb_tab);
void		settings_rm_space_end(char *str);
void		settings_show(t_settings *settings);
void		settings_show_string(char *title, char *s);
int     	settings_texture_fd_check_dup(t_game *game, int txt_type);
int     	settings_texture_fd_open(t_game *game, int txt_type, char *filename);
int     	settings_texture_fd_save_fd(t_game *game, int txt_type, int fd);
int     	settings_texture_fd_save_filename(t_game *game, int txt_type, char *filename);
void		settings_texture_fd_set_line_no(t_game *game, int txt_type,
				t_map_fd *map);

// MAP
int		map(t_game *game);
int     	map_check(t_game *game, t_list *map_obj);
int     	map_check_line(t_settings *settings, t_map_fd *map);
int     	map_check_line_char(int c);
int     	map_check_line_player_sp(t_settings *settings, int c, int x, int y);
void		map_check_width(t_settings *settings, char *str);
t_list		*map_get_start_obj(t_game *game);
void    	map_rm_nl(t_game *game, t_list *map_obj);
void    	map_rm_nl_line(char *str);
int     	map_tab(t_game *game, t_list *map_obj);
int     	map_tab_check(int **tab, int height, int width);
int     	map_tab_check_line(int *line, int *prev, int *next, int width);
int     	map_tab_check_line_horizontal(int *line, int i, int dir, int width);
int     	map_tab_check_line_vertical(int *line, int i);
int     	map_tab_create(t_game *game, t_list *map_obj);
int     	map_tab_create_line(t_map_fd *map, int *tab, int len_tab);
void    	map_tab_free(t_game *game);
void    	map_tab_init_bzero(int **tab, int len);
int     	map_tab_init(t_game *game);
int     	*map_tab_init_line(int **tab, int height, int width);
void		map_tab_show(int **tab);

#endif
