NAME = libft.a
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
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
