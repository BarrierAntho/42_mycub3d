/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_panic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:47:42 by abarrier          #+#    #+#             */
/*   Updated: 2022/09/29 20:02:03 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_message.h"
#include "ft_put.h"

int	ft_panic(int errcode, const char *filename, char *msg)
{
	int		res;
	char	*err_msg;

	res = 0;
	err_msg = NULL;
	if (errcode >= 0)
		err_msg = strerror(errcode);
	else if (msg)
		err_msg = msg;
	else
		err_msg = NULL;
	res += ft_putstr_fd(2, "cub3D");
	res += ft_putstr_fd(2, ": ");
	if (filename)
	{
		res += ft_putstr_fd(2, (char *)filename);
		res += ft_putstr_fd(2, ": ");
	}
	res += ft_putendl_fd(2, err_msg);
	return (res);
}
