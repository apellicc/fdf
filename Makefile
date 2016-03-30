NAME	=	fdf
SRC		= 	main.c \
			draw.c \
			ft_draw_iso.c \
			ft_draw_para.c \
			ft_ini.c \
			key.c \
			parse.c


OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	Make -C ./libft/
	gcc -o $(NAME) $(OBJ) -L ./libft -lft -L ./minilibx/ \
		-lmlx -framework OpenGL -framework AppKit -Werror -Wextra -Werror

$(OBJ):
	gcc -c $(FLAGS) $(SRC) -I ../libft

clean:
	rm -f $(OBJ)
	Make clean -C ./libft/

fclean: clean
	rm -f $(NAME)
	rm -f ./libft/libft.a

re: fclean all
