#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *new;
	
	if (!s)
		return NULL;
	i = -1;
	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return NULL;
	while (s[++i])
		new[i] = f(i, s[i]);
	new[i] = '\0';
	return (new);
}