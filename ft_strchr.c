//#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
	int i;
	i = 0;
	if (c == '\0')
		return ((char *)str);
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	return 0;
}
/*
int main(void)
{
	char *go = "anaaaaaaa krum";
	int c = '';
	printf("%s",ft_strchr(go, c));
}
*/
