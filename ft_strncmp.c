/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:54:36 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/26 20:42:55 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
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
