/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:37:24 by apaula-r          #+#    #+#             */
/*   Updated: 2021/10/28 22:50:10 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*modsrc;
	char	*moddest;

	if (!src && !dest)
		return (0);
	modsrc = (char *)src;
	moddest = (char *)dest;
	while (n--)
		*moddest++ = *modsrc++;
	return (dest);
}
