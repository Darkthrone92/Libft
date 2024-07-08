/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 16:57:08 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/08 18:57:11 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	char	a;

	printf("Introduce un caracter\n");
	scanf("%c", &a);
	if (ft_isalnum((int) a))
	{
		printf("El caracter es alfanumerico\n");
	}
	else
	{
		printf("El caracter no es alfanumerico\n");
	}
	return (0);
}*/
