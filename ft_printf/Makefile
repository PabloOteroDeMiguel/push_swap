# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: potero-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 09:33:25 by potero-d          #+#    #+#              #
#    Updated: 2021/10/27 15:29:12 by potero-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_putchar_fd_p.c ft_putstr_fd_p.c \
	  ft_putnbr_base_p.c ft_strlen_p.c ft_putnbr_base_n.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CC = gcc

CFLAGS	= -Wall -Wextra -Werror -I.

RM = rm -f

$(NAME): $(OBJS)
			ar rcs $(NAME) $(OBJS)
all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY:	all clean fclean re
