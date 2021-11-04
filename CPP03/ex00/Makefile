NAME= trap

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS=  ClapTrap.cpp main.cpp
OBJ = $(SRCS:.c=.o)

HEADERS= ClapTrap.hpp

DELETEOBJ= rm -rf *.o

DELETENAME= rm -rf $(NAME)

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS)  -o trap
clean:
	$(DELETEOBJ) $(DELETENAME)

fclean : clean
	rm -rf $(NAME)

re: clean all
