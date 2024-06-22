/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:03:42 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/22 18:06:05 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char) '\0';
		i++;
	}
}

/*int	main(void)
{
	char	str[50] = "Hola mundision";
	printf("Antes de función: %s\n", str);

	ft_bzero(str, 50);
	printf("Después de función: %s\n", str);
}*/
