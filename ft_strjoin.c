/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:28:20 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/05 13:32:01 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	final_str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
			* sizeof(char));
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

/*int	main(void)
{
	char	*str1 = "Hola";
	char	*str2 = "mundo!";
	char	*result;

	result = ft_strjoin(str1, str2);
	printf("The first sentence is: %s.\n", str1);
	printf("THe second sentence is: %s.\n", str2);
	printf("The result after function is: %s.\n", result);
	free(result);
	return (0);
}*/
