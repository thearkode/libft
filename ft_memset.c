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
/*
int main(void)
{
	char a[256] = "ana";
	size_t len = 2;
	char k = '$';
	printf("%s\n", ft_memset(a, k, len));
}
*/


