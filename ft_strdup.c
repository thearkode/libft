#include "libft.h"

char *ft_strdup(const char *str)
{
	size_t len;
	char *dup;

	len = ft_strlen(str) + 1;
	dup = ft_calloc(1, len);
	if (!dup)
		return (NULL);
	ft_memmove(dup, str, len);
	return (dup);
}