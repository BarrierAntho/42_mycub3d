/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:51:40 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/16 17:31:04 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned const char	*ucs1;
	unsigned const char	*ucs2;
	size_t				len_s1;
	size_t				len_s2;
	size_t				i;

	ucs1 = (unsigned char *)s1;
	ucs2 = (unsigned char *)s2;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (len_s1 > len_s2 && n > len_s2)
		return (-1);
	else if (len_s1 < len_s2 && n > len_s1)
		return (1);
	i = 0;
	while (ucs1[i] && ucs2[i] && i < n)
	{
		if (ucs1[i] != ucs2[i])
			return (ucs1[i] - ucs2[i]);
		i++;
	}
	return (0);
}
