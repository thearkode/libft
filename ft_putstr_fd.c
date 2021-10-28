/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:39:38 by apaula-r          #+#    #+#             */
/*   Updated: 2021/10/28 22:39:56 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}
/*
int main(void)
{
	int file;
	file = open("./test.txt", O_CREAT | O_APPEND | O_WRONLY, 0664);
	printf("My file descriptor: %d\n", file);
	ft_putstr_fd("you are awesome babe", file);

}
*/