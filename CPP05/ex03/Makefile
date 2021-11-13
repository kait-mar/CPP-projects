NAME= intern

CC= clang++ -g

FLAGS= -Wall -Wextra -Werror

SRCS=  bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp Intern.cpp

OBJ = $(SRCS:.c=.o)

DELETEOBJ= rm -rf *.o

DELETENAME= rm -rf $(NAME)

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS)  -o intern
clean:
	$(DELETEOBJ) $(DELETENAME)

fclean : clean
	rm -rf $(NAME)

re: clean all