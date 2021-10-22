/*#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *modsrc;
	char *moddest;
	modsrc = (char *)src;
	moddest = (char *)dest;
	if (!(modsrc) && !(moddest))
		return (0);
	while (n != 0)
	{
		*moddest++ = *modsrc++;
		n--;
	}
	return (dest);
}
*/
void *ft_memmove(void *dest, const void *src, size_t n)
{
	int i = 0;
	char *modsrc;
	char *moddest;
	modsrc = (char *)src;
	moddest = (char *)dest;
	if (src < dest)
	{
		while (n != 0)
		{
			i = i + n;
			moddest[i] = modsrc[i];
			i--;
			n--;
		}
	}
	else 
		return (ft_memcpy(dest, src, n));
	return (dest);
}
/*
int main(void)
{
	char source[256] = "33333";
	char dest[256] = "ola";
	printf("%s", ft_memmove(dest, source, 5));
}
*/


