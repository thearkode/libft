/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:36:47 by apaula-r          #+#    #+#             */
/*   Updated: 2021/10/28 23:05:07 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	i = 0;
	if (lst)
	{
		temp = lst;
		while (temp->next != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (temp->next == NULL)
			i++;
	}
	return (i);
}
