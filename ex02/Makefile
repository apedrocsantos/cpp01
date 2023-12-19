CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Brain

SRCS =	main.cpp\

all: $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $^ -o $(NAME) -g

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
