/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-r <apaula-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:48:34 by apaula-r          #+#    #+#             */
/*   Updated: 2021/10/29 20:20:36 by apaula-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countdigits(int n);

char	*ft_itoa(int n)
{
	size_t	len;
	char	*number;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = countdigits(n);
	number = (char *)malloc(sizeof(char) * len + 1);
	if (!number)
		return (NULL);
	if (n < 0)
	{
		number[0] = '-';
		n *= -1;
	}
	number[len--] = '\0';
	while (1)
	{
		number[len--] = n % 10 + 48;
		n /= 10;
		if (n == 0)
			break;
	}
	return (number);
}

static int	countdigits(int n)
{
	int	d;

	if (n <= 0)
		d = 1;
	else
		d = 0;
	while (n != 0)
	{
		n = n / 10;
		d++;
	}
	return (d);
}
/*
int main(void)
{
	printf("%s\n", ft_itoa(-623));
}
*/