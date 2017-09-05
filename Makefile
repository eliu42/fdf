
SRC = main.c

all:
	gcc -Wall -Wextra -Werror -L minilibx -lmlx -framework OpenGL -framework AppKit -I . main.c