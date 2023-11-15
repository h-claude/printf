# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 16:39:32 by hclaude           #+#    #+#              #
#    Updated: 2023/11/15 16:53:51 by hclaude          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
AR = ar

CFLAGS = -Werror -Wall -Wextra
ARFLAGS = rcs

OBJFILES = $(SRCFILES :.c = .o)

SRCFILES = ft_printf.c /
ft_put.c / 
ft_printf_format.c /

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJFILES)
	$(AR) $(ARFLAGS) $(NAME) $(OBJFILES)

clean : $(OBJFILES)
	rm -rf $(OBJFILES)

fclean : clean $(NAME)
	rm -rf $(NAME)

re : fclean all



	