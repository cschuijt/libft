objects = ft_atoi.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
					ft_isprint.o ft_strlen.o ft_substr.o ft_tolower.o ft_toupper.o \
					ft_itoa.o ft_strchr.o ft_strrchr.o ft_strdup.o ft_memset.o \
					ft_bzero.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o \
					ft_calloc.o ft_strncmp.o ft_strlcat.o ft_strlcpy.o ft_strnstr.o \
					ft_split.o
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

test-lbsd : re
	cc munit.c test.c -L . -l ft -o test -lbsd
	./test

norm :
	norminette ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_strlen.c ft_substr.c ft_tolower.c ft_toupper.c ft_itoa.c \
	ft_strchr.c ft_strrchr.c ft_strdup.c ft_memset.c ft_bzero.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_calloc.c ft_strncmp.c ft_strlcat.c \
	ft_strlcpy.c ft_strnstr.c ft_split.c

ft_atoi.o : ft_atoi.c
	cc $(flags) -c ft_atoi.c

ft_bzero.o : ft_bzero.c
	cc $(flags) -c ft_bzero.c

ft_calloc.o : ft_calloc.c
	cc $(flags) -c ft_calloc.c

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

ft_itoa.o : ft_itoa.c
	cc $(flags) -c ft_itoa.c

ft_memchr.o : ft_memchr.c
	cc $(flags) -c ft_memchr.c

ft_memcmp.o : ft_memcmp.c
	cc $(flags) -c ft_memcmp.c

ft_memcpy.o : ft_memcpy.c
	cc $(flags) -c ft_memcpy.c

ft_memmove.o : ft_memmove.c
	cc $(flags) -c ft_memmove.c

ft_memset.o : ft_memset.c
	cc $(flags) -c ft_memset.c

ft_split.o : ft_split.c
	cc $(flags) -c ft_split.c

ft_strchr.o : ft_strchr.c
	cc $(flags) -c ft_strchr.c

ft_strdup.o : ft_strdup.c
	cc $(flags) -c ft_strdup.c

ft_strlcat.o : ft_strlcat.c
	cc $(flags) -c ft_strlcat.c

ft_strcpy.o : ft_strcpy.c
	cc $(flags) -c ft_strcpy.c

ft_strncmp.o : ft_strncmp.c
	cc $(flags) -c ft_strncmp.c

ft_strnstr.o : ft_strnstr.c
	cc $(flags) -c ft_strnstr.c

ft_strrchr.o : ft_strrchr.c
	cc $(flags) -c ft_strrchr.c

ft_strlen.o : ft_strlen.c
	cc $(flags) -c ft_strlen.c

ft_substr.o : ft_substr.c
	cc $(flags) -c ft_substr.c

ft_tolower.o : ft_tolower.c
	cc $(flags) -c ft_tolower.c

ft_toupper.o : ft_toupper.c
	cc $(flags) -c ft_toupper.c
