#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *concat;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	concat = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!concat)
		return (NULL);
	i = 0;
	while (*s1)
		concat[i++] = *s1++;
	while (*s2)
		concat[i++] = *s2++;
	concat[i] = '\0';
	return (concat);
}