#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}
/*
int main(void)
{
	int file;
	file = open("./test.txt", O_CREAT | O_APPEND | O_WRONLY, 0664);
	printf("My file descriptor: %d\n", file);
	ft_putstr_fd("you are awesome babe", file);

}
*/