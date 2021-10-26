#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t maxlen)
{
	size_t srclen;

	srclen = ft_strlen(src);
	if (maxlen == 0)
		return (srclen);
	if (srclen + 1 < maxlen)
		ft_memcpy(dest, src, (srclen + 1));
	else
	{
		ft_memcpy(dest, src, (maxlen - 1));
		dest[maxlen - 1] = '\0';
	}
	return (srclen);
}
