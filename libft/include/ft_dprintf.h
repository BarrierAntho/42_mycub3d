/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:27:05 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 12:50:46 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DPRINTF_H
# define FT_DPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "ft_put.h"

/**
 * @brief Return int of total printed characters linked to string definition
 * and variable argument
 *
 * @param int fd: File descriptor | const char *s: String to be printed |
 * ...: variable argument
 * 	%c: character
 * 	%s: string
 * 	%p: pointer
 * 	%d: decimal
 * 	%u: unsigned int
 * 	%x: hexadecimal with prefix "0x"
 * 	%X: hexadecimal with prefix "0X"
 * 	%%: percentage character
 * @return int | >= 0: total of printed characters
 */
int	ft_dprintf(int fd, const char *s, ...);

/**
 * @brief Return total of printed characters according to active argument
 *
 * @param int fd: File descriptor | const char *s: String to be printed
 * va_list va: Variable argument list
 * @return int | >= 0: total of printed characters
 */
int	ft_dprintf_arg(int fd, const char *s, va_list va);

/**
 * @brief Return total of printed character
 *
 * @param int fd: File descriptor | va_list va: Variable argument list
 * @return int | >= 0: total of printed character
 */
int	ft_dprintf_putc(int fd, va_list va);

/**
 * @brief Return total of printed characters from number
 *
 * @param int fd: File descriptor | va_list va: Variable argument list
 * const char *base: Base for number conversion
 * @return int | >= 0: total of printed numbers
 */
int	ft_dprintf_putd(int fd, va_list va, const char *base);

/**
 * @brief Return total of printed characters from pointer
 *
 * @param int fd: File descriptor | va_list va: Variable argument list
 * const char *base: Base for number conversion
 * @return int | >= 0: total of printed numbers
 */
int	ft_dprintf_putp(int fd, va_list va, const char *base);

/**
 * @brief Return total of printed characters from string
 *
 * @param int fd: File descriptor | va_list va: Variable argument list
 * @return int | >= 0: total of printed characters
 */
int	ft_dprintf_puts(int fd, va_list va);

/**
 * @brief Return total of printed characters from unsigned numbers
 *
 * @param int fd: File descriptor | va_list va: Variable argument list
 * const char *base: Base for number conversion
 * @return int | >= 0: total of printed numbers
 */
int	ft_dprintf_putu(int fd, va_list va, const char *base);

/**
 * @brief Return total of printed characters from numbers converted to hexa
 *
 * @param int fd: File descriptor | va_list va: Variable argument list
 * const char *base: Base for number conversion
 * @return int | >= 0: total of printed numbers
 */
int	ft_dprintf_putx(int fd, va_list va, const char *base);

#endif
