/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_warning.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:59:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 08:26:49 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_message.h"
#include "ft_dprintf.h"

int	ft_warning(char *f, char *data, char c, char *msg)
{
	int			res;

	res = ft_dprintf(1, "%sWarning\n\
			function: %s\n\
			data str: %s\n\
			data c: %c\n\
			msg: %s%s\n",
			YE, f, data, c, msg, NC);
	if (res <= 0)
		res = 1;
	return (res);
}
