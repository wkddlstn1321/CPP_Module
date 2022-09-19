NAME	= Animal
CC		= c++
CFLAGS	= -Wall -Wextra -Werror
SRC		= main.cpp Cat.cpp Dog.cpp Animal.cpp Brain.cpp
OBJ		= $(SRC:.cpp=.o)
HEAD	= Animal.hpp Cat.hpp Dog.hpp Brain.hpp

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