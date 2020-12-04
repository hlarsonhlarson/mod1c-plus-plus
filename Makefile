PHONY: clean fclean re all

FILENAMES = parse_map.cpp
FILENAMES += parse_file.cpp
NAME = mod1

SRCS	=$(addprefix srcs/, $(FILENAMES))

CC	= g++
CFLAGS	= -Wall -Wextra -Werror
CFLAGS	+= -I includes/

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

re: fclean all

clean:
	@rm -rf build/

fclean: clean
	@rm -f $(NAME)
