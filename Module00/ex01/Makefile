NAME	= phoneBook
CC		= c++
CFLAGS	= -Wall -Wextra -Werror
SRC		= main.cpp
OBJ		= $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(NAME)

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $(SRC)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re :
	make fclean
	make all

.PHONY : all clean fclean re