#include <stdio.h>
// declarar size_t no header

size_t ft_strlen(char const *str)
{
	size_t i;
	i = 0;
	while (str[i])
		i++;
	return (i);
	
}
/*
int main(void)
{
	char a[256] = "";
	printf("%zu", ft_strlen(a));
}
*/

