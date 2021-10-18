#include <stdio.h>
// declarar size_t no header

void *ft_memset(void *str, int c, size_t len)
{
	char *temp;

	temp = (char *)str;
	while (len != 0)
	{
		*temp++ = c;
		len--;
	}
	return (str);
	
}

void ft_bzero(void *str, size_t n)
{
		ft_memset(str, 0, n);
}
/*
int main(void)
{
	char a[10] = "Hello";
	int i = -1;

	while(a[++i])
		printf("%c", a[i]);
	ft_bzero(a, 5);
	i = -1;
	while(a[++i])
		printf("%c", a[i]);
}
*/
