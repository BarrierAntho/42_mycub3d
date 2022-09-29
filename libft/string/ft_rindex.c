/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rindex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:07:01 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/28 15:25:43 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_rindex(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (i);
		i--;
	}
	return (-1);
}
