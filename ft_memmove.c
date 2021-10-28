/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:37:36 by apaula-r          #+#    #+#             */
/*   Updated: 2021/10/28 23:06:40 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*modsrc;
	char	*moddest;

	modsrc = (char *)src;
	moddest = (char *)dest;
	if (src < dest)
	{
		moddest += n;
		modsrc += n;
		while (n--)
			*--moddest = *--modsrc;
	}
	else
		return (ft_memcpy(dest, src, n));
	return (dest);
}
