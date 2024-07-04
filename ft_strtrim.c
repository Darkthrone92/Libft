#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static	int trim(const char *set, char c);
static	char *new_str(const char *s1, size_t start, size_t len);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstr;
	int	i;
	int	j;

	if (s1 == NULL || set == NULL)
		return (NULL);	
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && trim(set, s1[i]))
		i++;
	while (j > i && trim(set, s1[j - 1]))
		j--;
	trimstr = new_str(s1, i, j - i);
	return (trimstr);
}

static char	*new_str(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (len == 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return(str);
}

static int	trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*str1 = "Hellozxyzxyzxyzy world!";
	char	*strset = "zxy";
	char	*result;

	result = ft_strtrim(str1, strset);
	printf("Original string: %s.\n", str1);
	printf("To trim: %s.\n", strset);
	printf("Result: %s.\n", result);
	free(result);
	return (0);
}
