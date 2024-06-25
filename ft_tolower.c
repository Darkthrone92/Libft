/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 20:19:36 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/25 20:26:59 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
	}
	return (c);
}

/*int	main(void)
{
	int	i;

	i = 'A';
	printf("Antes de función: %c\n", i);
	i = ft_tolower(i);
	printf("Después de función: %c\n", i);
	return (0);
}*/
