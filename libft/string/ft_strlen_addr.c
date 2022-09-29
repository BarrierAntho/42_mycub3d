/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_addr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:13:44 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 08:13:47 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strlen_addr(char *start, char *end)
{
	if (!start || !end)
		return (0);
	else if (start > end)
		return (0);
	else if (start == end)
		return (1);
	else
		return ((size_t)(end - start + 1));
}
