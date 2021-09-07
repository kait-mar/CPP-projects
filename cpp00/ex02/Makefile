NAME= account

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS=  account.cpp tests.cpp

OBJ = $(SRCS:.c=.o)

HEADERS= account.hpp

DELETEOBJ= rm -rf *.o

DELETENAME= rm -rf $(NAME)

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS)  -o account
clean:
	$(DELETEOBJ) $(DELETENAME)

fclean : clean
	rm -rf $(NAME)

re: clean all