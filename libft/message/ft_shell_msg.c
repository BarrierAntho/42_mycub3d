/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shell_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:05:52 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/20 08:07:12 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_message.h"
#include "ft_dprintf.h"

int	ft_shell_msg(int err, char *data)
{
	int		res;
	char	*message;

	message = strerror(err);
	res = ft_dprintf(2, "Error: %s: %s\n", message, data);
	if (res <= 0)
		res = 1;
	return (res);
}
