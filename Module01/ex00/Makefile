NAME	= zombie
CC		= c++
CFLAGS	= -Wall -Wextra -Werror
SRC		= Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJ		= $(SRC:.cpp=.o)
HEAD	= Zombie.hpp

%.o : %.cpp $(HEAD)
	$(CC) $(CFLAGS) -c $(SRC)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re :
	make fclean
	make all

.PHONY : all clean fclean re