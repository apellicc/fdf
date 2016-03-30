# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 15:54:27 by apellicc          #+#    #+#              #
#    Updated: 2016/03/29 15:35:58 by apellicc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_bzero.c ft_putstr.c ft_strdup.c ft_strncpy.c ft_strsub.c\
ft_memalloc.c ft_strchr.c ft_strequ.c ft_strnequ.c ft_strtrim.c\
ft_memdel.c ft_strclr.c ft_strjoin.c ft_strnew.c ft_memset.c\
ft_strcmp.c ft_strlen.c ft_strnstr.c ft_putchar.c ft_strcpy.c\
ft_strncmp.c  ft_strrchr.c ft_putendl.c  ft_strdel.c ft_strstr.c ft_strcat.c\
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_strncat.c ft_toupper.c ft_tolower.c ft_putnbr.c ft_memchr.c\
ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c\
ft_striter.c ft_striteri.c ft_strlcat.c ft_strmap.c ft_strmapi.c\
ft_strsplit.c ft_itoa.c ft_memccpy.c ft_memmove.c ft_atoi.c ft_memcpy.c\
ft_memcmp.c ft_strsplit.c ft_strtrim_c.c ft_intlen.c ft_searchc.c\
ft_searchrc.c ft_searchrwhitespace.c ft_searchwhitespace.c ft_intcpy.c\
ft_lenword.c ft_nbword.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c\
ft_lstiter.c ft_lstmap.c ft_sqrt.c ft_puttab.c ft_tablen.c ft_tabfree.c\
get_next_line.c ft_memnew.c
OBJ = $(SRC:.c=.o)

FLAG = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	gcc -c $(FLAG) $(SRC) -I ./
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
