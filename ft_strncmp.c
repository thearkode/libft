/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:41:56 by apaula-r          #+#    #+#             */
/*   Updated: 2021/10/28 23:08:35 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *s, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((str[i] || s[i]) && i < n)
	{
		if (str[i] != s[i])
			return ((unsigned char)str[i] - (unsigned char)s[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{

	char *go = "ana aa";
	char *y = "anaaaaaaaa";
	printf("%d",ft_strncmp(go, y, 5));
}
*/