/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:20:55 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/21 18:49:47 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	int	i;

	printf("Introduce un caracter printable: ");
	if (scanf("%d", &i) != 1)
	{
		printf("%d no es un caracter", i);
		return (1);
	}
	if (ft_isprint((int) i))
	{
		printf("El caracter %d es printable", i);
	}
	else
	{
		printf("El caracter no es printable");
	}
	return (0);
}*/
