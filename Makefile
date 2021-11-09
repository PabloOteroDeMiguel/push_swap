SRCS = main.c ft_string.c ft_isdigit.c

OBJS = $(SRCS:.c=.o)

Name = pushswap.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

$(NAME): $(OBJS)
			ar rcs $(NAME) $(OBJS)
all: $(NAME)

clean:
			$(RM) $(OBJS)
fclean: clean
			$(RM) $(NAME)
re: fclean $(NAME)

.PHONY: all clean fclean re
