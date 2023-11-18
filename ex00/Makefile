CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

OBJS =	Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp\
		main.cpp\

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(NAME) -g

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re