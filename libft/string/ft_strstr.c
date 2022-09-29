/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:32:52 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/16 17:33:18 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strstr(const char *s, const char *needle)
{
	int	i;

	if (!needle)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == needle[0])
		{
			if (ft_strncmp(&s[i], needle, ft_strlen(needle)) == 0)
				return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
