# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 16:39:32 by hclaude           #+#    #+#              #
#    Updated: 2023/11/20 17:18:57 by hclaude          ###   ########.fr        #
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

#%.o : %.c
#	$(CC) $(CFLAGS) -c $< -o $@
LIBFT_A=libft.a

$(LIBFT_A) :
	cd ./libft
	make all
	make clean
	mv libft.a ../
	cd ..
	mv libft.a $(NAME)

all : $(LIBFT_A)

$(NAME) : $(OBJFILES)
	$(AR) $(ARFLAGS) $(NAME) $(OBJFILES)

clean :
	rm -rf $(OBJFILES)

fclean : clean
	rm -rf $(NAME)

re : fclean all
