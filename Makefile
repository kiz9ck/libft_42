/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamenny <kkamenny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:57:41 by kkamenny          #+#    #+#             */
/*   Updated: 2024/07/18 17:57:37 by kkamenny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

NAME = libft.a
CC = cc

CFLAGS = -Wall -Wextra -Werror -I.
AR = ar rc
RANLIB = ranlib

SRCDIR = src/

FILES = ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c ft_split.c \
        ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
        ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c \
        ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memmove.c \
        ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strrchr.c ft_toupper.c \
        ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c ft_putstr_fd.c \
        ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

SRC = $(addprefix $(SRCDIR), $(FILES))

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	$(RANLIB) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re