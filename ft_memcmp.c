/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:15:28 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/16 16:36:59 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "123456789";
	str2 = "123456789";
	printf("Str1: %s\n", str1);
	printf("Str2: %s\n", str2);
	int	resultado = ft_memcmp(str1, str2, 5);
	printf("Resultado: %d\n", resultado);
	return (0);
}*/
