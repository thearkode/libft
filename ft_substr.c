#include "libft.h"
#include <string.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	unsigned int max_len;
	unsigned int i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		max_len = ft_strlen(&s[start]);
		if (max_len < len)
			len = max_len;
		sub = malloc(sizeof(char) * len + 1);
		if (!sub)
			return (NULL);
		while (i < len)
		{
			sub[i] = s[start + i];
			i++;
		}
		sub[i] = '\0';
	}
	return (sub);
}