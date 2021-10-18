#include <stdio.h>

int ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)? 1 : 0);
}
/*
int main(void)
{
	int a = ' ';
	printf("%d", ft_isalnum(a));
}
*/
