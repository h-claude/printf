# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 14:52:17 by hclaude           #+#    #+#              #
#    Updated: 2023/11/04 03:30:45 by hclaude          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

AR = ar

ARFLAGS = rcs

CFLAGS = -Wall -Werror -Wextra 

OBJFILES = $(SRCFILES:.c=.o)
OBJFILESBONUS = $(OBJFILES) $(SRCBONUS:.c=.o)

SRCFILES = ft_atoi.c  \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strchr.c \
ft_strdup.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri.c

SRCBONUS = ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJFILES)
	$(AR) $(ARFLAGS) $(NAME) $(OBJFILES)

bonus : $(OBJFILESBONUS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJFILESBONUS)

clean : 
	@rm -rf $(OBJFILES) $(OBJFILESBONUS)

fclean :
	@rm -rf *.a *.o

re : fclean all