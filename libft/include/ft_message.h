/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_message.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:41:35 by abarrier          #+#    #+#             */
/*   Updated: 2022/09/29 20:03:52 by abarrier         ###   ########.fr       */
/*   Updated: 2022/04/11 07:58:28 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MESSAGE_H
# define FT_MESSAGE_H

# include <errno.h>
# include <string.h>
# include "ft_color.h"

/***GLOBAL***/
# define SEP_P "******************************"
# define SEP_S "------------------------------"
# define ERR_ARG "Wrong argument definition"
# define ERR_FILEOPEN "File is missing or not readable"
# define ERR_MALLOC "Malloc issue"
# define ERR_NOOBJ "No object address"

/***FILE DESCRIPTOR***/
# define ERR_FD "File descriptor not defined"

/***LIST***/
# define ERR_NOLIST "No list address"
# define ERR_LST_APPEND "Error on append list"

/**STRING***/
# define ERR_MAXLEN_INT "Length string is more than MAX_LEN_INT"

/**
 * @brief Print error message on stderr in RED color according to 
 * the following structure
 * 	Error\n
 *	Function: xxxx
 *	Data string: xxxx
 *	Data character: xxxx
 *	Message: xxxx
 *
 * @param int fd: File descriptor | char *f: Function where the error is
 * char *s: Message to print | char *data: Data of the error
 * @return int | >= 1: Total of printed characters
 */
int	ft_error(char *f, char *data, char c, char *msg);

int	ft_panic(int errcode, const char *filename, char *msg);
void	*ft_panic_null(int errcode, const char *filename, char *msg);
int	ft_panic_value(int errcode, const char *filename, char *msg, int value);

/**
 * @brief Print error message on stderr according to 
 * the following structure
 * 	Error: message: object
 *
 * @param int: Error message number | char *obj: Data of the error
 * @return int | >= 1: Total of printed characters
 */
int	ft_shell_msg(int err, char *data);

/**
 * @brief Print warning message on stdout in YELLOW color according to
 * the following structure
 * 	Warning\n
 *	Function: xxxx
 *	Data string: xxxx
 *	Data character: xxxx
 *	Message: xxxx
 *
 * @param int fd: File descriptor | char *f: Function where the error is
 * char *s: Message to print | char *data: Data of the error
 * @return int | >= 1: Total of printed characters
 */
int	ft_warning(char *f, char *data, char c, char *msg);

#endif
