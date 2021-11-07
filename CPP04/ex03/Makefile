NAME= amateria

CC= clang++ -g

FLAGS= -Wall -Wextra -Werror

SRCS=  Amateria.cpp main.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp

OBJ = $(SRCS:.c=.o)

DELETEOBJ= rm -rf *.o

DELETENAME= rm -rf $(NAME)

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS)  -o amateria
clean:
	$(DELETEOBJ) $(DELETENAME)

fclean : clean
	rm -rf $(NAME)

re: clean all
