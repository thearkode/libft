#include "libft.h"

char *ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t lenfind;
	
	if (*find == '\0')
		return ((char *)str);
	lenfind = ft_strlen(find);
	while (*str && len-- >= lenfind)
	{
		if (*str == *find && ft_strncmp(str, find, lenfind) == 0)
				return ((char *)str);
		str++;
	}
	return NULL;
}
