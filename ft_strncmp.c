/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:54:36 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/16 17:20:01 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (unsigned char)s1[i] != '\0'
		&& (unsigned char)s2[i] != '\0')
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "123456789";
	str2 = "1sdsadsa56689";
	printf("Str1: %s\n", str1);
	printf("Str2: %s\n", str2);
	int	resultado = ft_strncmp(str1, str2, 8);
	printf("Resultado: %d\n", resultado);
}*/
