CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = harlFilter

OBJS =	main.cpp\
		Harl.cpp\

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(NAME) -g

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
