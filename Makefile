# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 16:39:32 by hclaude           #+#    #+#              #
#    Updated: 2023/11/20 16:12:05 by hclaude          ###   ########.fr        #
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
	
all : $(NAME)

$(NAME) : $(OBJFILES)
	$(AR) $(ARFLAGS) $(NAME) $(OBJFILES)

clean :
	rm -rf $(OBJFILES)

fclean : clean
	rm -rf $(NAME)

re : fclean all
