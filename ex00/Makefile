CC = c++

#CC = c++ -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -L /usr/lib/gcc/x86_64-linux-gnu/11

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

SRCS =	Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp\
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