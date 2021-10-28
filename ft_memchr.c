/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:36:58 by apaula-r          #+#    #+#             */
/*   Updated: 2021/10/28 23:05:25 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	const char	*cstr;

	i = 0;
	cstr = (const char *)str;
	while (i < n)
	{
		if (cstr[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
