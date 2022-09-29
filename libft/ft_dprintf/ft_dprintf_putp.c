/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_putp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:31:22 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 13:33:10 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"
#include "ft_constant.h"

int	ft_dprintf_putp(int fd, va_list va, const char *base)
{
	int					res;
	unsigned long long	un;

	res = 0;
	un = (unsigned long long)va_arg(va, unsigned long long);
	if (un == 0)
		return (ft_putstr_fd(fd, NULL_PTR));
	res += ft_putstr_fd(fd, PREF_HEXA_L);
	ft_putun_base_fd_recursive(fd, base, un, &res);
	return (res);
}
