#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
int main(void)
{
	char go = 'a';
	printf("%d",ft_toupper(go));
}
*/
