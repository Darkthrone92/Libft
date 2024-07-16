/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:18:51 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/16 16:38:27 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *) malloc(ft_strlen(s) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
    char *original = "Hello, world!";
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL)
    {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate);
    }
    else
    {
        printf("Error.\n");
    }

    return (0);
}*/
