/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newarglist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 20:32:12 by camurray          #+#    #+#             */
/*   Updated: 2019/07/01 20:41:34 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** This function creates a new memory block using malloc to store our list
** of arguments that we need to print, or in cookie talk, this function
** creates a box that can hold our cookies we need to eat.
** We have a check that if the pointer we were passed is pointing to NULL
** we should return NULL as the pointer hasn't been assigned a value
** and we were incorrectly passed an empty value for some reason.
** If the dereferenced pointer is NULL, so the value of the thing being
** pointed to (pointer is assigned and not NULL but contains NULL) is
** NULL then we malloc and add an error message if malloc fails.
** We repeat this step with the next node created with our temporary
** storage variable cookie which we return.
*/

t_arg	*ft_newarglist(t_arg **arg)
{
	t_arg	*cookie;

	if (arg == NULL)
		return (NULL);
	cookie = *arg;
	if (*arg == NULL)
	{
		if (!(*arg = ft_memalloc(sizeof(t_arg))))
			ft_exit("Something went wrong with malloc! A cookie box couldn't be created.\n", 1);
		return (*arg);
	}
	else
	{
		while (cookie->next)
			cookie = cookie->next;
		if (!(cookie->next = ft_memalloc(sizeof(t_arg))))
			ft_exit("Something went wrong with malloc! A cookie box couldn't be created.\n", 1);
		return (cookie->next);
	}
}
