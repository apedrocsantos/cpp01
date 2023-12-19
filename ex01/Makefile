CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = MoarBrainz

SRCS =	Zombie.cpp\
		zombieHorde.cpp\
		main.cpp\

HPPS =	Zombie.hpp\
		Zombie.h\

all: $(NAME)

$(NAME) : $(SRCS) $(HPPS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) -g

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re