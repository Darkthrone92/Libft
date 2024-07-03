#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_str;
	int	i;
	int	j;

	i = 0;
	j = 0;
	final_str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * 
		sizeof(char));
	if (final_str == NULL)
		return (NULL);	
	while (s1[i] != '\0')
	{
		final_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		final_str[i] = s2[j];
		i++;
		j++;
	}
	final_str[i] = '\0';
	return (final_str);
}
