# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 16:39:32 by hclaude           #+#    #+#              #
#    Updated: 2023/11/20 18:24:01 by hclaude          ###   ########.fr        #
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
ft_putpointer.c 

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
