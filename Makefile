# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 14:03:01 by ayel-mou          #+#    #+#              #
#    Updated: 2023/11/18 21:52:47 by ayel-mou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_bzero.c \
	ft_isalnum.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strlen.c \
	ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_isascii.c \
	ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_strdup.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_putchar_fd.c ft_itoa.c ft_putendl_fd.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c \
	ft_split.c

SRCB = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	   ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
	   ft_lstclear_bonus.c ft_lstiter_bonus.c\

OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = cc

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
$(OBJB): $(SRCB)
	$(CC) $(CFLAGS) -c $(SRCB)
	ar -rc $(NAME) $(OBJB)
bonus: $(OBJB)
	 
clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all
