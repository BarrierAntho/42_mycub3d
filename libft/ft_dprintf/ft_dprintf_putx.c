/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_putx.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:42:35 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 12:55:24 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

int	ft_dprintf_putx(int fd, va_list va, const char *base)
{
	int	n;

	n = (int)va_arg(va, int);
	return (ft_putn_base_fd(fd, base, n));
}
