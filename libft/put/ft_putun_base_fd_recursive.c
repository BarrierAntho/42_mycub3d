/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun_base_fd_recursive.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 09:19:39 by antho             #+#    #+#             */
/*   Updated: 2022/04/11 09:24:50 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

void	ft_putun_base_fd_recursive(int fd, const char *base,
		unsigned long long un, int *res)
{
	size_t	len_base;

	len_base = ft_strlen(base);
	if (un / len_base < 1)
		*res += ft_putchar_fd(fd, base[un % len_base]);
	else
	{
		ft_putun_base_fd_recursive(fd, base, un / len_base, res);
		ft_putun_base_fd_recursive(fd, base, un % len_base, res);
	}
}
