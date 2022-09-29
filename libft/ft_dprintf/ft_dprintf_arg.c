/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:15:17 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 13:33:34 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"
#include "ft_constant.h"

int	ft_dprintf_arg(int fd, const char *s, va_list va)
{
	int	res;

	res = 0;
	if (*s == 'c')
		res += ft_dprintf_putc(fd, va);
	else if (*s == 's')
		res += ft_dprintf_puts(fd, va);
	else if (*s == 'p')
		res += ft_dprintf_putp(fd, va, BASE_16_L);
	else if (*s == 'd' || *s == 'i')
		res += ft_dprintf_putd(fd, va, BASE_10);
	else if (*s == 'u')
		res += ft_dprintf_putu(fd, va, BASE_10);
	else if (*s == 'x')
		res += ft_dprintf_putx(fd, va, BASE_16_L);
	else if (*s == 'X')
		res += ft_dprintf_putx(fd, va, BASE_16_U);
	else if (*s == '%')
		res += ft_putchar_fd(fd, *s);
	else
		res += 0;
	return (res);
}
