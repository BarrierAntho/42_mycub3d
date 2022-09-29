SEP_P		:=	"----------------------------------------------"
SEP_S		:=	".............................................."

NAME		:=	libft.a
CC		:=	cc
CFLAGS		:=	-MMD -Wall -Wextra -Werror
#CFLAGSADD	:=	-Wconversion -g3 -fsanitize=address
#CFLAGSADD	:=	-g3 -fsanitize=address
CFLAGSADD	:=	

IPATH		:=	include
OPATH		:=	obj

# SOURCES FOLDER
CHARPATH	:=	chartype
CONVPATH	:=	convert
DPRINTFPATH	:=	ft_dprintf
GNLPATH		:=	gnl
LISTPATH	:=	list
MEMPATH		:=	memory
MSGPATH		:=	message
STRPATH		:=	string
PUTPATH		:=	put

RM		:=	rm -rf

CHAR_SRCS	:=	ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isblank.c\
			ft_isdigit.c\
			ft_islower.c\
			ft_ispolarity.c\
			ft_isprint.c\
			ft_ispunct.c\
			ft_isspace.c\
			ft_isupper.c\
			ft_isxdigit.c

CONV_SRCS	:=	ft_atoi.c\
			ft_atol.c\
			ft_atoll.c

DPRINTF_SRCS	:=	ft_dprintf_arg.c\
			ft_dprintf.c\
			ft_dprintf_putc.c\
			ft_dprintf_putd.c\
			ft_dprintf_putp.c\
			ft_dprintf_puts.c\
			ft_dprintf_putu.c\
			ft_dprintf_putx.c

GNL_SRCS	:=	get_next_line.c\
			get_next_line_utils.c

LIST_SRCS	:=	ft_lst_append.c\
			ft_lst_clear.c\
			ft_lst_delbyobj.c\
			ft_lst_free.c\
			ft_lst_func_lst.c\
			ft_lst_init.c\
			ft_lst_last.c\
			ft_lst_new.c\
			ft_lst_size.c

MEM_SRCS	:=	ft_free_ptrptr_str.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c

MSG_SRCS	:=	ft_error.c\
			ft_panic.c\
			ft_panic_null.c\
			ft_panic_value.c\
			ft_shell_msg.c\
			ft_warning.c

PUT_SRCS	:=	ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putn_base_fd.c\
			ft_putstr_fd.c\
			ft_putun_base_fd_recursive.c

STR_SRCS	:=	ft_formatchr.c\
			ft_index.c\
			ft_rindex.c\
			ft_split.c\
			ft_strchr.c\
			ft_strchrset_exclude.c\
			ft_strcpy.c\
			ft_strdup.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strlen_addr.c\
			ft_strnchar.c\
			ft_strncmp.c\
			ft_strncpy.c\
			ft_strrchr.c\
			ft_strrchrset_exclude.c\
			ft_strstr.c\
			ft_strtrim.c

SRCS		:=	$(CHAR_SRCS)\
			$(CONV_SRCS)\
			$(DPRINTF_SRCS)\
			$(GNL_SRCS)\
			$(LIST_SRCS)\
			$(MEM_SRCS)\
			$(MSG_SRCS)\
			$(PUT_SRCS)\
			$(STR_SRCS)

OBJS		=	$(addprefix $(OPATH)/, $(SRCS:.c=.o))

DEPS		=	$(OBJS:.o=.d)

vpath %.h $(IPATH)
vpath %.c $(CHARPATH)\
	$(CONVPATH)\
	$(DPRINTFPATH)\
	$(GNLPATH)\
	$(LISTPATH)\
	$(MEMPATH)\
	$(MSGPATH)\
	$(PUTPATH)\
	$(STRPATH)
vpath %.o $(OPATH)

all:			$(NAME)

$(OPATH)/%.o:		%.c
			$(CC) $(CFLAGS) $(CFLAGSADD) -I $(IPATH) -c $< -o $@

$(NAME):		$(OBJS)
			ar rcs $@ $^

$(OBJS):		| $(OPATH)

$(OPATH):
			mkdir -p $(OPATH)

clean:
			$(RM) $(OPATH)

fclean:			clean
			$(RM) $(NAME)

re:			fclean
			@make all

norme:
			@echo $(SEP_P)
			norminette $(IPATH)
			@echo $(SEP_P)
			norminette $(DPRINTFPATH)
			@echo $(SEP_P)
			norminette $(CHARPATH)
			@echo $(SEP_P)
			norminette $(STRPATH)
			@echo $(SEP_P)
			norminette $(PUTPATH)
			@echo $(SEP_P)
			norminette $(MSGPATH)
			@echo $(SEP_P)
			norminette $(CONVPATH)
			@echo $(SEP_P)
			norminette $(MEMPATH)
			@echo $(SEP_P)
			norminette

-include $(DEPS)

.PHONY:			all clean fclean re norme
