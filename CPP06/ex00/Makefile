NAME= convert

CC= clang++ -g -std=c++98

FLAGS= -Wall -Wextra -Werror

SRCS=   main.cpp convert.cpp

OBJ = $(SRCS:.c=.o)

DELETEOBJ= rm -rf *.o

DELETENAME= rm -rf $(NAME)

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS)  -o convert
clean:
	$(DELETEOBJ) $(DELETENAME)

fclean : clean
	rm -rf $(NAME)

re: clean all