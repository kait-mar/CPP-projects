NAME= iter

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS=   main.cpp

OBJ = $(SRCS:.c=.o)

DELETEOBJ= rm -rf *.o

DELETENAME= rm -rf $(NAME)

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS)  -o iter
clean:
	$(DELETEOBJ) $(DELETENAME)

fclean : clean
	rm -rf $(NAME)

re: clean all