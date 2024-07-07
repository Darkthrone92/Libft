#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (s == NULL || f == NULL)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*int	main(void)
{
	char	*s = "Hola mundo!";
	char	*res;

	res = ft_strmapi(s, name_function);
	if (result == NULL)
	{
		printf("MEmory allocation failed.\n");
		return (1);
	}
	printf("Original string: %s.\n", s);
	printf("Resulting string: %s.\n", res);
	free(res);
	return (0);
}*/
