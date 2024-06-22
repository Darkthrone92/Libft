/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:14:17 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/22 20:00:59 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (dest == src)
	{
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Este es el origen";
	char	dest[50] = "Este es el destino";

	printf("Antes de función:\n");
	printf("Origen: %s\n", src);
	printf("Destino: %s\n", dest);

	ft_memcpy(dest, src, sizeof(src));

	printf("Después de memcpy:\n");
    	printf("Origen: %s\n", src);
    	printf("Destino: %s\n", dest);
	return 0;
}*/
