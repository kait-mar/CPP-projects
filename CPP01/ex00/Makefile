NAME= zombie

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS=  Zombie.cpp

OBJ = $(SRCS:.c=.o)

HEADERS= Zombie.hpp

DELETEOBJ= rm -rf *.o

DELETENAME= rm -rf $(NAME)

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS)  -o zombie
clean:
	$(DELETEOBJ) $(DELETENAME)

fclean : clean
	rm -rf $(NAME)

re: clean all