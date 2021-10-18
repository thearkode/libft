#include <stdio.h>

int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9' ? 1 : 0);
}
/*
int main(void)
{
	int a = 1;
	printf("%d", ft_isdigit(a));
}
*/