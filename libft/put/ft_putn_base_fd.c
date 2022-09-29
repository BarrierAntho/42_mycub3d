/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putn_base_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:11:38 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 09:30:36 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

int	ft_putn_base_fd(int fd, const char *base, long long n)
{
	int					res;
	unsigned long long	un;

	res = 0;
	un = 0;
	if (n < 0)
	{
		res += ft_putchar_fd(fd, '-');
		un = -(unsigned long long)n;
	}
	else
		un = (unsigned long long)n;
	ft_putun_base_fd_recursive(fd, base, un, &res);
	return (res);
}
