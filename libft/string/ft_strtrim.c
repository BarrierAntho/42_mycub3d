/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:15:58 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 08:16:00 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static char	*ft_strtrim_shiftspace(char *s)
{
	if (ft_isspace(*s))
	{
		s++;
		while (ft_isspace(*s))
			s++;
	}
	else
		s++;
	return (s);
}

char	*ft_strtrim(const char *s)
{
	char	*new;
	char	*start;
	char	*end;
	int		j;

	if (!s)
		return (NULL);
	start = ft_strchrset_exclude(s, "\t\n\v\f\r ");
	end = ft_strrchrset_exclude(s, "\t\n\v\f\r ");
	new = (char *)malloc(sizeof(char) * (ft_strlen_addr(start, end) + 1));
	if (!new)
		return (NULL);
	j = 0;
	while (start && end && start <= end)
	{
		new[j] = *start;
		if (ft_isspace(*start))
			new[j] = ' ';
		start = ft_strtrim_shiftspace(start);
		j++;
	}
	new[j] = '\0';
	return (new);
}
