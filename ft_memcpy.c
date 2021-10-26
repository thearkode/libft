#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *modsrc;
	char *moddest;

	if (!src && !dest)
		return (0);
	modsrc = (char *)src;
	moddest = (char *)dest;
	while (n--)
		*moddest++ = *modsrc++;
	return (dest);
}
