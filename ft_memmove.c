#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *modsrc;
	char *moddest;

	modsrc = (char *)src;
	moddest = (char *)dest;
	if (src < dest)
	{
		moddest += n;
		modsrc += n;
		while (n--)
			*--moddest = *--modsrc;
	}
	else 
		return (ft_memcpy(dest, src, n));
	return (dest);
}
