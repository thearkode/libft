#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	//char *modsrc;
	char *moddest;
	modsrc = (char *)src;
	moddest = (char *)dest;
	if (modsrc && moddest < n)
		return (0);
	else 
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int main(void)
{
	char source[256] = "3";
	char dest[256] = "ola";
	printf("%s", ft_memcpy(dest, source, 3));
}
*/
