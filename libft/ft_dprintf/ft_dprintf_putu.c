/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_putu.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:19:28 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 13:33:55 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

int	ft_dprintf_putu(int fd, va_list va, const char *base)
{
	int				res;
	unsigned int	un;

	res = 0;
	un = (unsigned int)va_arg(va, unsigned int);
	ft_putun_base_fd_recursive(fd, base, un, &res);
	return (res);
}
