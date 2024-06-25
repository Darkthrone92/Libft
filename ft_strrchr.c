
char	*ft_strrchr(const char *s, int c)
{
        int     i;
	char *last_char;

        i = 0;
	*last_char = '\0';
        while (str[i] != '\0')
        {
                if (str[i] == c)
                {
                        return (char *)&str[i];
                }
        i++;
        }
        if (c == '\0')
                return (char *)&str[i];

        return (NULL);
}

int     main(void)
{
        char *j = "Hola mundo";
        char i = 'm';

        printf("Origen: %s\n", j);
        printf("El carácter a buscar es: %c\n", i);

        char *pos = ft_strchr(j, i);

        if(pos != NULL)
                printf("La posición es: %ld\n", pos - j);
        else
                printf("EL carácter no se ha encontrado.\n");
        return (0);
}
