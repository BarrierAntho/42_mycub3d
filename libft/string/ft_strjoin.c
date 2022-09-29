/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:51:25 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/16 14:16:39 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 && !s2)
		return (NULL);
	else if (s1 && !s2)
		return (ft_strdup(s1));
	else if (!s1 && s2)
		return (ft_strdup(s2));
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s = (char *)malloc(sizeof(char) *(len_s1 + len_s2 + 1));
	if (!s)
		return (NULL);
	s = ft_memmove(s, s1, len_s1);
	ft_memmove(s + len_s1, s2, len_s2);
	s[len_s1 + len_s2] = '\0';
	return (s);
}
