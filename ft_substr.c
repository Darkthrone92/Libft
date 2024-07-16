/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:16:37 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/16 16:42:32 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*int main(void) 
{
    char	*original = "Hola mundo!";
    char	*sub;

    sub = ft_substr(original, 5, 5); // It must get "mundo"
    if (sub) 
    {
        printf("Substr: '%s'\n", sub);
        free(sub);
    } 
    else 
    {
        printf("Error.\n");
    }

    sub = ft_substr(original, 0, 4); // It must get "Hola"
    if (sub) 
    {
        printf("Substr: '%s'\n", sub);
        free(sub);
    } 
    else 
    {
        printf("Error.\n");
    }

    sub = ft_substr(original, 5, 20); // It must get "Mundo!"
    if (sub) 
    {
        printf("Substr: '%s'\n", sub);
        free(sub);
    } 
    else 
    {
        printf("Error.\n");
    }

    sub = ft_substr(original, 20, 5); // It must get: ""
    if (sub) {
        printf("Substr: '%s'\n", sub);
        free(sub);
    } else {
        printf("Error.\n");
    }

    return (0);
}*/
