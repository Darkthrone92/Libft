/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:46:24 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/08 18:32:56 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
	if (ft_isalpha((int) a))
	{
		printf("El caracter %c es una letra\n", a);
	}
	else
	{
		printf("El caracter %c no es una letra\n", a);
	}
	return (0);
}*/
