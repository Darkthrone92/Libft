/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 16:26:01 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/21 16:54:20 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	char	a;

	printf("Introduce un caracter: \n");
	scanf("%c", &a);
	if (ft_isdigit((int)a))
	{
		printf("El caracter es numerico\n");
	}
	else
	{
		printf("El caracter no es numerico\n");
	}
	return (0);
}*/
