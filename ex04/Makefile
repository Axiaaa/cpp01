NAME = sedIsForLosers
SRC = main.cpp \
	File.cpp \

OBJ = $(SRC:.cpp=.o)
COMPILO = c++
FLAGS = -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILO) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(COMPILO) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
