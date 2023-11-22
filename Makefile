# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 16:39:32 by hclaude           #+#    #+#              #
#    Updated: 2023/11/22 16:50:04 by hclaude          ###   ########.fr        #
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

LIBFT_A :
	make -C libft

all : $(NAME)

$(NAME) : LIBFT_A $(OBJFILES)
	$(AR) $(ARFLAGS) $(NAME) $(OBJFILES) libft/*.o

clean :
	rm -rf *.o libft/*.o

fclean : clean
	rm -rf $(NAME) libft/*.a

re : fclean all
