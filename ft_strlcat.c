/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:40:59 by apaula-r          #+#    #+#             */
/*   Updated: 2021/10/28 22:58:45 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t maxlen)
{
	size_t			srclen;
	size_t			destlen;
	unsigned long	i;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (destlen >= maxlen)
		return (maxlen + srclen);
	if (srclen < (maxlen - destlen))
		ft_memcpy((dest + destlen), src, srclen + 1);
	else
	{
		ft_memcpy((dest + destlen), src, (maxlen - destlen - 1));
		dest[maxlen - 1] = '\0';
	}
	return (destlen + srclen);
}
