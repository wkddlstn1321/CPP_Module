NAME	= Form
CC		= c++
CFLAGS	= -Wall -Wextra -Werror
SRC		= main.cpp Bureaucrat.cpp Form.cpp
OBJ		= $(SRC:.cpp=.o)
HEAD	= Bureaucrat.hpp Form.hpp

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