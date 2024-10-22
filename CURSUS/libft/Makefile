# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omerozsipahi <omerozsipahi@student.42.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 12:40:44 by omerozsipah       #+#    #+#              #
#    Updated: 2024/10/21 12:40:45 by omerozsipah      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRCS = $(wildcard *.c)
OBJ = $(SRCS:.c=.o)
INC = libft.h
MAIN = main.o

all: $(NAME)
	@$(CC) $(FLAGS) $(MAIN) $(NAME) -o main
	@echo "compile completed."
$(NAME):$(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@ranlib $(NAME)

fclean: clean
	@rm -rf main
	@rm -rf $(NAME)
clean:
	rm -rf $(OBJ)
