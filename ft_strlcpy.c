/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:53:47 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/16 17:09:27 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size == 0)
	{
		return (i);
	}
	j = 0;
	while (j < size - 1 && src[j] != '\0')
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

/*int	main(void)
{
	char	d[50];
	char	*s;

	s = "Esto es una frase para copiar";

	printf("Antes de función:\n");
	printf("Src: %s\n", s);
	printf("Dst: %s\n", d);

	ft_strlcpy(d, s, sizeof(d));

	printf("Después de función:\n");
    	printf("Src: %s\n", s);
    	printf("Dst: %s\n", d);
	return 0;
}*/
