#include <stdio.h>

int ft_isascii(int c)
{
	return (c >= 32 && c <= 126 ? 1 : 0);
}

int main(void)
{
	int a = ' ';
	printf("%d", ft_isascii(a));
}

