# constant
SEP_P		:=	"----------------------------------------------"
SEP_S		:=	".............................................."

# libft settings
FTPATH			:=	libft
IFT				:=	include
FT_NAME			:=	libft.a
FT				:=	ft

# project settings
NAME 			:=	cub3d
NAME_AR			:=	libcub3d.a

# compilation settings
CC				:=	cc
CFLAGS			:=	-MMD -Wall -Wextra -Werror
#CFLAGS			:=	-MMD
#CFLAGSADD		:=	-g3 -fsanitize=address
CFLAGSADD		:=	-g3

VALGRIND		:=	valgrind -s --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes

IPATH			:=	include
OPATH			:=	obj
UTPATH			:=	unit_test

SRCS_PATH		:=	srcs
MAP_PATH		:=	map
PARSE_PATH		:=	parse
SETTINGS_PATH		:=	settings

AR				:=	ar rcs
RM				:=	rm -rf
NM				:=	nm

MAP_SRCS		:=	map.c\
					map_check.c\
					map_check_line.c\
					map_check_line_char.c\
					map_check_line_player_sp.c\
					map_check_width.c\
					map_get_start_obj.c\
					map_rm_nl.c\
					map_rm_nl_line.c\
					map_tab.c\
					map_tab_check.c\
					map_tab_check_line.c\
					map_tab_check_line_horizontal.c\
					map_tab_check_line_vertical.c\
					map_tab_create.c\
					map_tab_create_line.c\
					map_tab_free.c\
					map_tab_init_bzero.c\
					map_tab_init.c\
					map_tab_init_line.c\
					map_tab_show.c

PARSE_SRCS		:=	parse_argc.c\
					parse.c\
					parse_map_fd.c\
					parse_map_fd_free.c\
					parse_map_fd_init.c\
					parse_map_fd_show.c\
					parse_map_lst.c\
					parse_map_lst_check.c\
					parse_map_lst_fullspace.c\
					parse_map_lst_get_value.c\
					parse_map_lst_line.c\
					parse_map_lst_line_txt_type.c\
					parse_read_file.c

SETTINGS_SRCS		:=	settings_check.c\
						settings_check_map_order.c\
						settings_check_map_start_line.c\
						settings_check_map_size_min.c\
						settings_check_txt_type.c\
						settings_free.c\
						settings_free_close_fd.c\
						settings_init.c\
						settings_init_map.c\
						settings_rgb.c\
						settings_rgb_check.c\
						settings_rgb_check_char.c\
						settings_rgb_check_dup.c\
						settings_rgb_check_space.c\
						settings_rgb_check_value.c\
						settings_rgb_rm_space_end.c\
						settings_rgb_set_line_no.c\
						settings_rgb_set_value.c\
						settings_rgb_set_value_type.c\
						settings_rm_space_end.c\
						settings_show.c\
						settings_show_string.c\
						settings_texture_fd_check_dup.c\
						settings_texture_fd_open.c\
						settings_texture_fd_save_fd.c\
						settings_texture_fd_save_filename.c\
						settings_texture_fd_set_line_no.c

SRCS			:=	main.c\
					$(MAP_SRCS)\
					$(PARSE_SRCS)\
					$(SETTINGS_SRCS)
					
OBJS			:=	$(addprefix $(OPATH)/, $(SRCS:.c=.o))
DEPS			:=	$(OBJS:.o=.d)

vpath %.h $(IPATH)
vpath %.c $(SRCS_PATH)\
		$(SRCS_PATH)/$(MAP_PATH)\
		$(SRCS_PATH)/$(PARSE_PATH)\
		$(SRCS_PATH)/$(SETTINGS_PATH)

vpath %.o $(OPATH)

all:	$(NAME)

$(OPATH)/%.o:	%.c
			$(CC) $(CFLAGS) $(CFLAGSADD) -I $(IPATH) -I $(FTPATH)/$(IFT) -c $< -o $@

$(NAME):	$(OBJS)
			make -C $(FTPATH)
			$(CC) $(CFLAGS) $(CFLAGSADD) $(OBJS) -I $(IPATH) -I $(FTPATH)/$(IFT) -L$(FTPATH) -l$(FT) -o $(NAME)

$(OBJS):	| $(OPATH)

$(OPATH):
			mkdir -p $(OPATH)

clean:
			make clean -C $(FTPATH)
			$(RM) $(OPATH)

fclean:
			make clean
			$(RM) $(NAME) $(FTPATH)/$(FT_NAME)
  
re:
			make fclean
			make all
sym:
			$(NM) -Dgu $(NAME)

archive:		$(filter-out $(OBJ)/main.o, $(OBJS))
			$(AR) $(UTPATH)/$(NAME_AR) $^
			@ranlib $(UTPATH)/$(NAME_AR)

test_ok:
			make
			@echo "TEST - OK"
			$(VALGRIND) ./$(NAME) maps/ok_all_subject.cub
			@echo $(SEP_P)
			$(VALGRIND) ./$(NAME) maps/ok_map_space_end_line_1.cub
			@echo $(SEP_P)
			$(VALGRIND) ./$(NAME) maps/ok_map_space_end_line_2.cub
			@echo $(SEP_P)
			

test_ko:
			make
			@echo "TEST - KO MISSING FILE"
			$(VALGRIND) ./$(NAME) maps/ok_subject.cub.cub
			@echo $(SEP_S)
			$(VALGRIND) ./$(NAME) maps/ko_SO_no_space_sep.cub
			@echo $(SEP_P)
			@echo "TEST - KO DUPLICATE TEXTURE DATA"
			$(VALGRIND) ./$(NAME) maps/ko_SO_dup.cub
			@echo $(SEP_P)

-include $(DEPS)

.PHONY: all clean fclean re sym archive test_ok test_ko
