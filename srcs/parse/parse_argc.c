/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:07:35 by abarrier          #+#    #+#             */
/*   Updated: 2022/09/19 17:21:16 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int	parse_arg(int argc)
{
	if (argc != 2)
		return (ft_panic(-1, __func__, ERR_ARG));
	else
		return (0);
}