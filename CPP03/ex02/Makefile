NAME= trap

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS=  ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
OBJ = $(SRCS:.c=.o)

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
