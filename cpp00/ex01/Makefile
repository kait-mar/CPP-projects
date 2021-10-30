NAME= PhoneBook

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS=  phone.cpp main.cpp

OBJ = $(SRCS:.c=.o)

HEADERS= phone.hpp

DELETEOBJ= rm -rf *.o

DELETENAME= rm -rf $(NAME)

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS)  -o phonebook
clean:
	$(DELETEOBJ) $(DELETENAME)

fclean : clean
	rm -rf $(NAME)

re: clean all