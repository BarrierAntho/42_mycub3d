/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 08:45:30 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/20 12:51:01 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include "ft_memory.h"
# include "ft_message.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*prev;
	struct s_list	*next;
}			t_list;

/**
 * @brief Init new obj and add it at the end of the list
 *
 * @param t_list **lst: List | void *content: Content of the obj
 * @return t_list * | NULL: error, != 0: Obj address
 */
t_list	*ft_lst_append(t_list **lst, void *content);

/**
 * @brief Clear all object from the list
 *
 * @param t_list **lst: List | void (*f): Delete content function
 * @return N/A
 */
void	ft_lst_clear(t_list **lst, void (*f)(void *));

/**
 * @brief Delete the object from the list and return the address of
 * the next object
 *
 * @param t_list **lst: List | void (*f): Delete content function
 * @return t_list * | NULL: error or no next obj, != 0: Next obj address
 */
t_list	*ft_lst_delbyobj(t_list *obj, void (*f)(void *));

/**
 * @brief Clear all object from the list and free the list
 *
 * @param t_list **lst: List | void (*f): Delete content function
 * @return N/A
 */
void	ft_lst_free(t_list **lst, void (*f)(void *));

/**
 * @brief Do function on all object from the list
 *
 * @param t_list **lst: List | void (*f): Function
 * @return N/A
 */
void	ft_lst_func_lst(t_list **lst, void (*f)(void *));

/**
 * @brief Init a list and set to NULL the *list
 *
 * @param N/A
 * @return t_list * | NULL: error or no next obj, != 0: Next obj address
 */
t_list	**ft_lst_init(void);

/**
 * @brief Return the address of the last object address from the input obj
 *
 * @param t_list *lst: List
 * @return t_list * | NULL: error or no obj, != 0: Last obj address
 */
t_list	*ft_lst_last(t_list *lst);

/**
 * @brief Init and return the address of the new object address
 *
 * @param void *content: Content of the object
 * @return t_list * | NULL: error, != 0: New obj address
 */
t_list	*ft_lst_new(void *content);

/**
 * @brief Return the size of the list
 *
 * @param t_list **lst: List
 * @return size_t | >= 0
 */
size_t	ft_lst_size(t_list **lst);

#endif
