/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:04:07 by abarrier          #+#    #+#             */
/*   Updated: 2022/03/28 14:52:21 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chartype.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c))
		return (1);
	else if (ft_isalpha(c))
		return (1);
	else
		return (0);
}
