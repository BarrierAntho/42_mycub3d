/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:07:31 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/07 21:45:10 by antho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static size_t	ft_n_word(char const *str, int charset)
{
	size_t	res;
	int		i;
	int		j;

	res = 1;
	i = 0;
	j = (int)ft_strlen(str) - 1;
	while (str[i] == charset)
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[j] == charset)
		j--;
	while (i <= j)
	{
		if (str[i] == charset)
			res++;
		i++;
	}
	return (res);
}

static size_t	ft_n_letter(char const *str, int charset)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != charset)
		i++;
	return (i);
}

static char	**ft_frees(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

static char	**ft_sub_split(char **sl, char const *s, int c)
{
	int		i;
	int		j;
	size_t	n_letter;

	i = 0;
	j = 0;
	n_letter = 0;
	while (s[j])
	{
		if (s[j] != c)
		{
			n_letter = ft_n_letter(&s[j], c);
			sl[i] = (char *)malloc(sizeof(char) * (n_letter + 1));
			if (!sl[i])
				return (ft_frees(sl));
			ft_strlcpy(sl[i], &s[j], n_letter + 1);
			i++;
			j += n_letter;
		}
		else
			j++;
	}
	sl[i] = 0;
	return (sl);
}

char	**ft_split(char const *s, int c)
{
	char	**ptr;
	size_t	n_word;

	if (!s)
		return (NULL);
	n_word = ft_n_word(s, c);
	ptr = (char **)malloc(sizeof(char *) * (n_word + 1));
	if (!ptr)
		return (NULL);
	ptr = ft_sub_split(ptr, s, c);
	return (ptr);
}
