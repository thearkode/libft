#include "libft.h"

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
