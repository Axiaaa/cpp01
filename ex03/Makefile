NAME = Unnecessaryviolence
SRC = main.cpp \
	  HumanA.cpp \
	  Weapon.cpp \
	  HumanB.cpp

CC = c++
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re

