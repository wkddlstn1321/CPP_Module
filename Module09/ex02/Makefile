NAME	= PmergeMe
CC		= c++
CFLAGS	= -Wall -Wextra -Werror
SRC		= main.cpp PmergeMe.cpp
OBJ		= $(SRC:.cpp=.o)
HEAD	= PmergeMe.hpp

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