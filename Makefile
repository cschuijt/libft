objects = ft_atoi.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
					ft_isprint.o ft_strlen.o ft_substr.o ft_tolower.o ft_toupper.o
flags = -Werror -Wall -Wextra
NAME = libft

all : $(NAME)

$(NAME) : $(NAME).a

$(NAME).a : $(objects)
	ar rcs $(NAME).a $(objects)

re : fclean all

clean :
	rm $(NAME).a $(objects)

fclean :
	rm -f $(NAME).a $(objects)

test : re
	cc munit.c test.c -L . -l ft -o test
	./test

norm :
	norminette ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_strlen.c ft_substr.c ft_tolower.c ft_toupper.c

ft_atoi.o : ft_atoi.c
	cc $(flags) -c ft_atoi.c

ft_isalnum.o : ft_isalnum.c
	cc $(flags) -c ft_isalnum.c

ft_isalpha.o : ft_isalpha.c
	cc $(flags) -c ft_isalpha.c

ft_isascii.o : ft_isascii.c
	cc $(flags) -c ft_isascii.c

ft_isdigit.o : ft_isdigit.c
	cc $(flags) -c ft_isdigit.c

ft_isprint.o : ft_isprint.c
	cc $(flags) -c ft_isprint.c

ft_strlen.o : ft_strlen.c
	cc $(flags) -c ft_strlen.c

ft_substr.o : ft_substr.c
	cc $(flags) -c ft_substr.c

ft_tolower.o : ft_tolower.c
	cc $(flags) -c ft_tolower.c

ft_toupper.o : ft_toupper.c
	cc $(flags) -c ft_toupper.c
