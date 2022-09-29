/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_putd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:33:07 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 11:58:05 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

int	ft_dprintf_putd(int fd, va_list va, const char *base)
{
	int	n;

	n = (int)va_arg(va, int);
	return (ft_putn_base_fd(fd, base, n));
}
