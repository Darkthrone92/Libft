/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:43:50 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/16 16:36:34 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	value;
	size_t			i;

	src = (unsigned char *)s;
	value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == value)
		{
			return ((void *)&src[i]);
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char str[] = "Lorem ipsum dolor sit amet";
	char val = 'd';
	size_t bytes = 26;

	char *result = ft_memchr(str, val, bytes);

	if (result != NULL)
		printf("El valor %c está en pos: %ld\n", val, result - str);
	else
		printf("El valor %c no se encontró en %zu bytes\n", val, bytes);
	return (0);
}*/
