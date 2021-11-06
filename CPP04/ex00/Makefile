NAME= poly

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS=  animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp
OBJ = $(SRCS:.c=.o)

DELETEOBJ= rm -rf *.o

DELETENAME= rm -rf $(NAME)

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS)  -o poly
clean:
	$(DELETEOBJ) $(DELETENAME)

fclean : clean
	rm -rf $(NAME)

re: clean all
