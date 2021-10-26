NAME= bureau

CC= clang++ -g

FLAGS= -Wall -Wextra -Werror

SRCS=  bureaucrat.cpp main.cpp Form.cpp
OBJ = $(SRCS:.c=.o)

DELETEOBJ= rm -rf *.o

DELETENAME= rm -rf $(NAME)

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS)  -o form
clean:
	$(DELETEOBJ) $(DELETENAME)

fclean : clean
	rm -rf $(NAME)

re: clean all