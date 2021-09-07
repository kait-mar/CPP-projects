NAME= zombieHD

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS=  Zombie.cpp main.cpp ZombieHorde.cpp

OBJ = $(SRCS:.c=.o)

HEADERS= Zombie.hpp

DELETEOBJ= rm -rf *.o

DELETENAME= rm -rf $(NAME)

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS)  -o zombieHD
clean:
	$(DELETEOBJ) $(DELETENAME)

fclean : clean
	rm -rf $(NAME)

re: clean all