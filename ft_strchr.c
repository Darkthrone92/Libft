/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 20:31:44 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/16 17:58:57 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*int	main(void)
{
	char *j = "Hola mundo";
	char i = 'm';
	
	printf("Origen: %s\n", j);
	printf("El carácter a buscar es: %c\n", i);

	char *pos = ft_strchr(j, i);
	
	if(pos != NULL)
		printf("La posición es: %ld\n", pos - j);
	else
		printf("EL carácter no se ha encontrado.\n");
	return (0);
}*/
