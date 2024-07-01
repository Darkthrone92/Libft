//#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' ||
		*nptr == '\v' || *nptr == '\f' || *nptr == '\r') 
        nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return sign * result;
}

/*int	main(void) 
{
    const char	*str1 = "   -12345";
    const char	*str2 = "42";
    const char	*str3 = "+6789";
    const char	*str4 = "  1050abc123";
    printf("Convert '%s' to int: %d\n", str1, ft_atoi(str1));
    printf("Convert '%s' to int: %d\n", str2, ft_atoi(str2));
    printf("Convert '%s' to int: %d\n", str3, ft_atoi(str3));
    printf("Convert '%s' to int: %d\n", str4, ft_atoi(str4));
    return (0);
}*/
