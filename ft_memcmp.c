/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:37:12 by apaula-r          #+#    #+#             */
/*   Updated: 2021/10/28 23:06:11 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str, const void *s, size_t n)
{
	size_t				i;
	const unsigned char	*modstr;
	const unsigned char	*mods;

	modstr = (const unsigned char *)str;
	mods = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (modstr[i] != mods[i])
			return ((unsigned char)modstr[i] - (unsigned char)mods[i]);
		i++;
	}
	return (0);
}
