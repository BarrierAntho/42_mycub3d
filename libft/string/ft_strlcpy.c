/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:02:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/07 20:52:27 by antho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	int		i;

	len_src = ft_strlen(src);
	i = 0;
	if ((len_src + 1) < dstsize)
	{
		while (i < (int)(len_src + 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	else if (dstsize)
	{
		while (i < (int)(dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}
