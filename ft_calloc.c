#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	size_t	i;
	unsigned char	*p;

	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	p = (unsigned char *)array;
	i = 0;
	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}
	return (array);
}
