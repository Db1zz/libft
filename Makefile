# Project compiler settings

# GCC is used for finding memory leaks
# CC = gcc
# CFLAGS = -fsanitize=address

CC = cc
CFLAGS = -Wall -Werror -Wextra

# Project/Binary Name
NAME = libft

# Project Files
SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)

# Compile Library
all: $(NAME) 

$(NAME): $(OBJS)
	ar rcs $(NAME).a $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Cleaning Commands
clean:
	rm -f $(OBJS)

fclean: clean
	rm $(NAME).a

re:	fclean all

.PHONY: all clean fclean re