/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_putc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:22:42 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 08:23:44 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

int	ft_dprintf_putc(int fd, va_list va)
{
	int	ap;

	ap = (int)va_arg(va, int);
	return (ft_putchar_fd(fd, ap));
}
