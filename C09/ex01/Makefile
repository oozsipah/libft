CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCDIR = srcs
INCDIR = includes

# Source files and object files
SRCS = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)

# Output library
LIB = libft.a

# Default rule (equivalent to 'make all')
all: $(LIB)

# Rule to create the static library
$(LIB): $(OBJS)
	@ar rcs $(LIB) $(OBJS)
	@echo "Static library $(LIB) created."

# Rule to compile .c files into .o files
%.o: %.c $(INCDIR)/ft.h
	@$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@
	@echo "Compiled $< into $@"

# Clean up object files
clean:
	@rm -f $(OBJS)
	@echo "Cleaned up object files."

# Clean up object files and the library
fclean: clean
	@rm -f $(LIB)
	@echo "Removed $(LIB)."

# Rebuild everything
re: fclean all

