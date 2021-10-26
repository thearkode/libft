#include "libft.h"

void	*ft_calloc(size_t n, size_t n_size)
{
	void *new;

	new = malloc(n * n_size);
	if (new == 0)
		return (new);
	ft_bzero(new, n * n_size);
	return (new);
}