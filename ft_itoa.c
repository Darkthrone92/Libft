/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbatiste <xbatiste@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:02:25 by xbatiste          #+#    #+#             */
/*   Updated: 2024/07/08 18:02:28 by xbatiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_length(int nbr);

char	*ft_itoa(int n)
{
	char			*result;
	int				len;
	unsigned int	num;

	len = num_length(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		num = (unsigned int)(-n);
	else
		num = (unsigned int)n;
	while (len--)
	{
		result[len] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		result [0] = '-';
	return (result);
}

static int	num_length(int nbr)
{
	int	length;

	length = 0;
	if (nbr <= 0)
		length = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		length++;
	}
	return (length);
}

/*int	main(void)
{
    int	test_numbers[] = {0, -123, 456, -2147483648, 2147483647};
    int	num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);
    char	*result;
    int	i;

    i = 0;
    while (i < num_tests)
    {
        result = ft_itoa(test_numbers[i]);
        if (result != NULL)
        {
            printf("ft_itoa(%d) = %s\n", test_numbers[i], result);
            free(result);
        }
        else
        {
            printf("ft_itoa(%d) = NULL\n", test_numbers[i]);
        }
	i++;
    }

    return (0);
}*/
