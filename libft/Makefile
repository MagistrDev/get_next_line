# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecelsa <ecelsa@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/15 21:27:34 by ecelsa            #+#    #+#              #
#    Updated: 2019/11/17 03:12:34 by ecelsa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c ft_memset.c ft_bzero.c ft_memcpy.c ft_tolower.c ft_toupper.c ft_memmove.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_memrcpy.c ft_memccpy.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_rstrlen.c ft_strncmp.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strequ.c ft_strnequ.c ft_atoi.c ft_itoa.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstsize.c ft_strskip.c ft_lstpback.c ft_arrdel.c ft_strsplit.c ft_lstmap.c ft_strrev.c
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
