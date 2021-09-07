NAME= megaphone

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS=  megaphone.cpp

OBJ = $(SRCS:.c=.o)

#HEADERS= megaphone.h

DELETEOBJ= rm -rf *.o

DELETENAME= rm -rf $(NAME)

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS)  -o megaphone
clean:
	$(DELETEOBJ) $(DELETENAME)

fclean : clean
	rm -rf $(NAME)

re: clean all