NAME= human

CC= clang++

FLAGS= -Wall -Wextra -Werror -g

SRCS=  main.cpp humanA.cpp humanB.cpp Weapon.cpp

OBJ = $(SRCS:.c=.o)

DELETEOBJ= rm -rf *.o

DELETENAME= rm -rf $(NAME)

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS)  -o human
clean:
	$(DELETEOBJ) $(DELETENAME)

fclean : clean
	rm -rf $(NAME)

re: clean all