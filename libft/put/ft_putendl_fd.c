/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:43:47 by amarchan          #+#    #+#             */
/*   Updated: 2022/09/29 19:56:43 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

int	ft_putendl_fd(int fd, char *s)
{
	int	res;

	res = 0;
	if (!s)
		return (res);
	res += ft_putstr_fd(fd, s);
	res += ft_putchar_fd(fd, '\n');
	return (res);
}
