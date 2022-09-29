/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchrset_exclude.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:15:50 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 08:15:51 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strrchrset_exclude(const char *s, const char *chrset)
{
	int	i;

	i = (int)ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (ft_strchr(chrset, s[i]) == NULL)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
