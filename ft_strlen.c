/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:49:21 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/01 19:07:14 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(int argc, char **argv)
{
	printf("%zu\n", ft_strlen("hola"));
	 if (argc > 1)
		printf("%zu\n", ft_strlen(argv[1]));
	return 0;
}*/
