/*#include <stdio.h>

size_t ft_strlen(char const *str)
{
	size_t i;
	i = 0;
	while (str[i])
		i++;
	return (i);
	
}
*/
size_t ft_strlcpy(char *dest, const char *src, size_t destlen)
{
	unsigned long i;
	i = 0;
	if (!(src) && !(dest))
		return (0);
	while (src[i] && i + 1 < destlen)
	{
		dest[i] = src[i];
		i++;
	}
	i = i + 1;
	dest[i] = '\0';
	//printf("%s\n", src);
	//printf("%s\n", dest);
	return (ft_strlen(src));
}
/*
int main(void)
{
	char source[256] = "3";
	char dest[256] = "ola";
	printf("%zu", ft_strlcpy(dest, source, 3));
}
*/