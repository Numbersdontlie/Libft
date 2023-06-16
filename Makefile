NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c\
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c\
	ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS} libft.h

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

#${OBJS}: ${SRCS}
#	cc -c ${SRCS} ${FLAGS} 

#test : ${OBJS}
#	cc -o TEST ${SRCS} ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME} 

re: fclean all

.PHONY: all clean fclean re