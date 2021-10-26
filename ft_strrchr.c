#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	const char *start;

	start = str;
	str += ft_strlen(str);
	while (str >= start)
	{
		if (*str == c)
			return ((char *)str);
		str--;
	}
	return (NULL);
}