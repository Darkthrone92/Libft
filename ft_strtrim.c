
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_str;
	size_t	i;
	size_t	len1;
	size_t	len2;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	final_str = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (final_str == NULL)
	{
		return (NULL);
	}
	while (s1[i])
	
}
