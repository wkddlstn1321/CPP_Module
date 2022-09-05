NAME	= brain
CC		= c++
CFLAGS	= -Wall -Wextra -Werror
SRC		= main.cpp
OBJ		= $(SRC:.cpp=.o)

%.o : %.cpp
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