/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 20:31:44 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/26 18:23:41 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
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
