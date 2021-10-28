/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:13:59 by apaula-r          #+#    #+#             */
/*   Updated: 2021/10/28 22:46:58 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t n_size)
{
	void	*new;

	new = malloc(n * n_size);
	if (new == 0)
		return (new);
	ft_bzero(new, n * n_size);
	return (new);
}
