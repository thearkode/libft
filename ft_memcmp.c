#include <stdio.h>

int ft_memcmp(const void *str, const void *s, size_t n)
{
	unsigned int i;
	const char *modstr;
	const char *mods;

	modstr = (char *)str;
	mods = (char *) s;
	i = 0;
	while ((modstr[i] || mods[i]) && i < n)
	{
		if (modstr[i] != mods[i])
			return (modstr[i] - mods[i]);
		i++;
	}
	return (0);
}

int main(void)
{

	char *go = "ana aa";
	char *y = "anaaaaaaaa";
	printf("%d",ft_memcmp(go, y, 5));
}
