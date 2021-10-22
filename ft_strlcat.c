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
size_t ft_strlcpy(char *dest, const char *src, size_t maxlen)
{
	size_t srclen = ft_strlen(src);
	size_t destlen = ft_strlen(dest);
	unsigned long i;
	unsigned long b;
	i = 0;
	b = destlen;
	if (destlen == 0)
		return (0);
	if (destlen > maxlen)
		return (destlen + srclen);
	while (maxlen > destlen + 1 && src[i])
	{
		dest[b] = src[i];
		i++;
		b++;
	}
	b = b + 1;
	dest[b] = '\0';
	//printf("%s\n", src);
	//printf("%s\n", dest);
	return (destlen + srclen);
}
/*
int main(void)
{
	char source[256] = "3";
	char dest[256] = "ola";
	printf("%zu", ft_strlcpy(dest, source, 7));
}
*/
