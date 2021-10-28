/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:41:11 by apaula-r          #+#    #+#             */
/*   Updated: 2021/10/28 22:59:04 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t maxlen)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (maxlen == 0)
		return (srclen);
	if (srclen + 1 < maxlen)
		ft_memcpy(dest, src, (srclen + 1));
	else
	{
		ft_memcpy(dest, src, (maxlen - 1));
		dest[maxlen - 1] = '\0';
	}
	return (srclen);
}
