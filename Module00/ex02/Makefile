NAME	= Account
CC		= c++
CFLAGS	= -Wall -Wextra -Werror
SRC		= test.cpp Account.cpp
OBJ		= $(SRC:.cpp=.o)
HEAD	= Account.hpp

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(NAME)

all : $(NAME)

%.o : %.cpp $(HEAD)
	$(CC) $(CFLAGS) -c $(SRC)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re :
	make fclean
	make all

.PHONY : all clean fclean re