/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:03:43 by camurray          #+#    #+#             */
/*   Updated: 2019/07/18 18:53:09 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2)
	{
		++s1;
		++s2;
		if (*s1 == 0 && *s2 == 0)
			return (0);
	}
	return (*(unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1);
}

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2 || (ft_strlen(s1) != ft_strlen(s2)))
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}
