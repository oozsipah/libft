NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRCS = $(wildcard *.c)
OBJ = $(SRCS:.c=.o)
INC = libft.h
MAIN = main.o

all: $(NAME)
	$(CC) $(FLAGS) $(MAIN) $(NAME) -o main
	@echo "compile completed."
$(NAME):$(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@ranlib $(NAME)


clean:
	@rm -rf *.o
fclean:
	@rm -rf *.o
	@rm -rf main
	@rm -rf $(NAME)

