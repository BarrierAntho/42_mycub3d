/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:15:20 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 08:15:21 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int	i;

	i = 0;
	while (dst[i] && src[i] && n > 0)
	{
		dst[i] = src[i];
		i++;
		n--;
	}
	if (src[i] == '\0')
		dst[i] = '\0';
	return (dst);
}
