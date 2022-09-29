/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:14:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/17 16:56:41 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (NULL);
	ft_memcpy(new, s, len_s);
	new[len_s] = '\0';
	return (new);
}
