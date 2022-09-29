/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:38:46 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/15 09:46:50 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLOR_H
# define FT_COLOR_H

/***Style colors macro***/
# define DIM "\x1b[8m"
# define ITAL "\x1b[3m"
# define EMPHA "\x1b[4m"
# define BLINK "\x1b[5m"

/***Fixed colors macro***/
# define BK "\x1b[30m"
# define RD "\x1b[31m"
# define GN "\x1b[32m"
# define YE "\x1b[33m"
# define BU "\x1b[34m"
# define MG "\x1b[35m"
# define CY "\x1b[36m"
# define WH "\x1b[37m"
# define UK "\x1b[38m"

/***Fixed background colors macro***/
# define BBK "\x1b[40m"
# define BRD "\x1b[41m"
# define BGN "\x1b[42m"
# define BYE "\x1b[43m"
# define BBU "\x1b[44m"
# define BMG "\x1b[45m"
# define BCY "\x1b[46m"
# define BWH "\x1b[47m"
# define BUK "\x1b[48m"

/***Reset colors macro***/
# define NC "\x1b[0m"

#endif
