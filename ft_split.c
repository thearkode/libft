/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 20:13:45 by apaula-r          #+#    #+#             */
/*   Updated: 2021/11/01 17:40:47 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wrdcnt(const char *str, char c);

char	**ft_split(const char *s, char c)
{
	unsigned int	i;
	unsigned int	start;
	unsigned int	k;
	char			**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_wrdcnt(s, c)) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			tab[k++] = ft_substr(s, start, i - start);
	}
	tab[k] = NULL;
	return (tab);
}

static int	ft_wrdcnt(const char *str, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] == '\0')
			return (count);
		while (str[i] && (str[i] != c))
			i++;
		count++;
	}
	return (count);
}
