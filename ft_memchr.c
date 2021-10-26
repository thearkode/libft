#include "libft.h"

char *ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	const char *cstr;

	i = 0;
	cstr = (const char *)str;
	while (i < n)
	{
		if (cstr[i] == c)
			return ((char *)str + i);
		i++;
	}
	return 0;
}
