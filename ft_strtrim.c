#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t counter;
	char *selected;

	counter = 0;
	i = 0;
	while (s1[i])
	{
		if (ft_strchr(s1, set[i]) == 0)
			counter++;
		i++;
	}
	selected = malloc(sizeof(char) * counter + 1);
	if (!selected)
		return NULL;
	i = 0;
	counter = 0;
	while (s1[i])
	{
		if (ft_strchr(s1, set[i]) == 0)
		{
			selected[counter] = s1[i];
			counter++;
		}
		i++;
		selected[counter] = '\0'
	}
	return (selected);
}
int main(void)
{
	printf("%s", ft_strtrim("   xxxtripouille", " x"));
}