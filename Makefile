SRCS = main.c ft_string.c ft_isdigit.c

LIBFT_PATH = libft/
FT_PRINTF_PATH = ft_printf/

OBJS = $(SRCS:.c=.o)

NAME = pushswap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

%.o:%.c
		$(CC) $(CFLAGS) -c  $< -o $(<:.c=.o)  -I$(LIBFT_PATH) -I$(FT_PRINTF_PATH) 

RM = rm -f

$(NAME): $(OBJS)
		@make -C $(LIBFT_PATH) --silent
		@make -C $(LIBFT_PATH) bonus --silent
		@make -C $(FT_PRINTF_PATH) --silent
		gcc -o $(NAME) $(OBJS) -I./libft -L./libft -lft -I./ft_printf -L./ft_printf -lftprintf

all: $(NAME)

clean:
			$(RM) $(OBJS)
			@make -C $(LIBFT_PATH) clean --silent
			@make -C $(FT_PRINTF_PATH) clean --silent

fclean: clean
			$(RM) $(NAME)
			@make -C $(LIBFT_PATH) fclean --silent
			@make -C $(FT_PRINTF_PATH) fclean --silent

re: fclean $(NAME)

.PHONY: all clean fclean re
