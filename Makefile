# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 16:39:32 by hclaude           #+#    #+#              #
#    Updated: 2023/11/22 14:40:49 by hclaude          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
AR = ar

CFLAGS = -Werror -Wall -Wextra
ARFLAGS = rcs

OBJFILES = $(SRCFILES:.c=.o)

SRCFILES = ft_printf.c \
ft_put.c \
ft_printf_format.c \
ft_puthexa.c \
ft_putpointer.c \
ft_put_unsigned.c

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

LIBFT_A :
	make -C libft
	mv libft/*.o .
	make fclean -C libft

all : $(NAME)

$(NAME) : LIBFT_A $(OBJFILES)
	$(AR) $(ARFLAGS) $(NAME) *.o

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
