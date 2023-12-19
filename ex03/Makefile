CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Attack

SRCS =	main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp\

HPPS =	HumanA.h

all: $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $^ -o $(NAME) -g

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
