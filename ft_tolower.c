#include <stdio.h>

int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

int main(void)
{
	char go = 'a';
	printf("%d",ft_tolower(go));
}

