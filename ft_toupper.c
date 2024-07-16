/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:54:44 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/15 17:50:11 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

/*int	main(void)
{
	int	i;

	i = 'a';
	printf("Antes de función: %c\n", i);
	i = ft_toupper(i);
	printf("Después de función: %c\n", i);
	return (0);
}*/
