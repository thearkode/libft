/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:32:05 by apaula-r          #+#    #+#             */
/*   Updated: 2021/10/27 19:34:43 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*selected;
	size_t len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	if (len)
		while (ft_strchr(set, s1[len]))
			len--;
	selected = malloc(sizeof(char) * len + 2);
	if (!selected)
		return NULL;
	ft_strlcpy(selected, s1, len + 2);
	return (selected);
}
/*
int main(void)
{
	printf("%s", ft_strtrim("", ""));
}
*/