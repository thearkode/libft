//#include <stdio.h>

char *ft_strrchr(const char *str, int c)
{
	int i;
	i = 0;
	char *saved = NULL;
	if (c == '\0')
		return (saved);
	while (str[i])
	{
		if (str[i] == c)
			saved = ((char *)str + i);	
		i++;
	}
	return saved;
}
/*
int main(void)
{
	char *go = "anaaaaaaa krum krum";
	int c = '0';
	printf("%s",ft_strrchr(go, c));
}
*/
