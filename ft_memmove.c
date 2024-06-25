/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:14:03 by xbatiste          #+#    #+#             */
/*   Updated: 2024/06/25 15:40:12 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (dest == src)
		return (dest);
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "abcdefghijklmnopqrstuvwxyz";
	char	dest[50] = "1234567891011121314151617";

	printf("Antes de función:\n");
	printf("Origen: %s\n", src);
	printf("Destino: %s\n", dest);

	ft_memmove(dest, src, sizeof(src));

	printf("Después de memmove:\n");
    	printf("Origen: %s\n", src);
    	printf("Destino: %s\n", dest);
	return 0;
}*/
