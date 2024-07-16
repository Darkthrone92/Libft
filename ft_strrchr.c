/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:59:09 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/16 16:41:01 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_char;

	i = 0;
	last_char = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			last_char = (char *)&s[i];
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (last_char);
}

/*int	main(void)
{
	char	*j = "Hola mmomoommomoo";
	char	i = 'm';

	printf("Origen: %s\n", j);
	printf("El carácter a buscar es: %c\n", i);
	char *pos = ft_strrchr(j, i);
	if (pos != NULL)
		printf("La posición es: %ld\n", pos - j);
	else
		printf("EL carácter no se ha encontrado.\n");
	return (0);
}*/
