/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 20:31:44 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/26 00:35:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return (char *)&str[i];
		}
	i++;
	}
	if (c == '\0')
		return (char *)&str[i];

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
