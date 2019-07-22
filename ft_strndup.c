/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:53:47 by camurray          #+#    #+#             */
/*   Updated: 2019/07/18 21:02:55 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *str, size_t maxlen)
{
	const char *p = str;

	while (maxlen-- > 0 && *p)
		p++;
	return p - str;
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0 || dst == src)
		return (dst);
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (n)
	{
		*str1 = *str2;
		str1++;
		str2++;
		n--;
	}
	return (dst);
}

char	*ft_strndup(const char *str, size_t maxlen)
{
	char	*copy;
	size_t	len;

	len = ft_strnlen(str, maxlen);
	copy = malloc(len + 1);
	if (copy != NULL)
	{
		(void)ft_memcpy(copy, str, len);
		copy[len] = '\0';
	}
	return (copy);
}
