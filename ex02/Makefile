CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = program

SRC = Animal.cpp \
	  main.cpp wrong.cpp \
	  Brain.cpp \
	  Dog.cpp \
	  Cat.cpp \

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)
fclean: clean
	rm -f $(NAME)	
re: clean all
