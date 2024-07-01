//#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*array;
	size_t			i;
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

/*int	main(void)
{
	int	*arr;
	size_t	num_ele;
	size_t	i;

	num_ele = 10;
	arr = (int *)ft_calloc(num_ele, sizeof(int));
	if (arr == NULL)
	{
		printf("Error.\n");
		return (1);
	}
	printf("Array converted to zero:\n");
	while (i < num_ele) 
	{
        	printf("%d ", arr[i]);
        i++;
   	}
    	printf("\n");
	free(arr);
	return (0);
}*/
