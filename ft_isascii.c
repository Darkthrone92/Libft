/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:24:47 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/21 18:19:56 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	int	i;

	printf("Introduce un número: \n");
	if (scanf("%d", &i) != 1)
	{
		printf("Introducción incorrecta \n");
		return (1);
	}

	if (ft_isascii((int) i))
	{
		printf("El caracter introducido es ascii: %i", i);
	}
	else
	{
		printf("El caracter introducido no es un caracter ascii");
	}
	return (0);
}*/
