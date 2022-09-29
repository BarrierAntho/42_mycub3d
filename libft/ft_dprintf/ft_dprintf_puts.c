/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_puts.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:31:31 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 13:26:06 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"
#include "ft_constant.h"

int	ft_dprintf_puts(int fd, va_list va)
{
	char	*ap;

	ap = (char *)va_arg(va, char *);
	if (!ap)
		return (ft_putstr_fd(fd, NULL_STR));
	else
		return (ft_putstr_fd(fd, ap));
}
