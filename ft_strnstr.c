/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:16:06 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/16 16:41:30 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
	{
		return ((char *) haystack);
	}
	while (i < len && haystack[i] != '\0')
	{
		while ((i + j) < len && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *) &haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char *h1 = "Hola mundo";
	const char *n1 = "mundo";
	const char *h2 = "Hola mundo";
	const char *n2 = "1234";
	size_t len1 = 12;
	char *result;

	result = ft_strnstr(h1, n1, len1);
	if (result != NULL)
		printf("Test 1: Se ha encontrado %s en %s: %s\n", n1, h1, result);
	else
		printf("Test 1: No se ha encontrado %s en %s\n", n1, h1);
	
	result = ft_strnstr(h2, n2, len1);
	if (result != NULL)
		printf("Test 2: Se ha encontrado %s en %s: %s\n", n2, h2, result);
	else
		printf("Test 2: No se ha encontrado %s en %s\n", n2, h2);
}*/
