//#include <stdio.h>

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
/*
int main(void)
{

	char *go = "ana aa";
	char *y = "anaaaaaaaa";
	printf("%d",ft_strncmp(go, y, 5));
}
*/