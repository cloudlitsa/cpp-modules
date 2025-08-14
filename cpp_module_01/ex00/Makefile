NAME = brainzzzz
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME) 

re : fclean all

.PHONY: clean fclean all re