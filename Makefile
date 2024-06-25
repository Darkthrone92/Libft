NAME = libft.a
SRC = ./ft_isalpha.c ./ft_isprint.c  ./ft_memset.c ./ft_strlen.c ./ft_bzero.c    ./ft_isascii.c  ./ft_memcpy.c   ./ft_strlcat.c ./ft_isalnum.c  ./ft_isdigit.c  ./ft_memmove.c  ./ft_strlcpy.c
HD = ./includes/
OBJ = $(SRC:.c=.o)
AR = ar rcs

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC) -I $(HD)
	ar rc $(NAME) *.o

clean:
	rm -f ${OBJ}
fclean:	clean
	rm -f ${NAME}
	rm -f includes/*.*.gch
re:	fclean all

.PHONY: $(NAME) all clean fclean re
