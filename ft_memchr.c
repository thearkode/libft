#include <stdio.h>

char *ft_memchr(const void *str, int c, size_t n)
{
	int i;
	const char *cstr;

	i = 0;
	cstr = (const char *)str;
	if (c == '\0')
		return ((char *)str);
	while (n != 0)
	{
		if (cstr[i] == c)
			return ((char *)str + i);
		i++;
		n--;
	}
	return 0;
}

int main(void)
{
	char *go = "krum ana";
	int c = 't';
	printf("%s",ft_memchr(go, c, 8));
}

