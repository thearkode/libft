/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:42:10 by apaula-r          #+#    #+#             */
/*   Updated: 2021/10/28 23:08:56 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	lenfind;

	if (*find == '\0')
		return ((char *)str);
	lenfind = ft_strlen(find);
	while (*str && len-- >= lenfind)
	{
		if (*str == *find && ft_strncmp(str, find, lenfind) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
