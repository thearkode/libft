#include <stdio.h>

size_t ft_strlen(char const *str)
{
	size_t i;
	i = 0;
	while (str[i])
		i++;
	return (i);
	
}

int ft_strncmp(const char *str, const char *s, size_t n)
{
	unsigned int i;
	i = 0;
	while ((str[i] || s[i]) && i < n)
	{
		if (str[i] != s[i])
			return (str[i] - s[i]);
		i++;
	}
	return (0);
}


char *ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t lenfind = ft_strlen(find);
	if (find[0] == '\0')
		return ((char *)str);
	while (*str && (int)len != 0)
	{
		if (*str == *find && ft_strncmp(str, find, lenfind) == 0)
				return ((char *)str);
		str++;
		len--;
	}
	return 0;
}

int main(void)
{
	char *go = "akrum";
	char *y = "krum";
	printf("%s",ft_strnstr(go, y, 8));
}
