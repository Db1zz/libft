# Project compiler settings
CC = cc
CFLAGS = -Wall -Werror -Wextra
# CFLAGS = -fsanitize=address

# Project/Binary Name
NAME = libft.a

# Project Files
SRCS = ft_atoi.c \
		ft_isdigit.c \
		ft_memchr.c \
		ft_putendl_fd.c \
		ft_striteri.c \
		ft_strncmp.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_putnbr_fd.c \
		ft_strjoin.c \
		ft_strnstr.c \
		ft_calloc.c \
		ft_itoa.c \
		ft_memcpy.c \
		ft_putstr_fd.c \
		ft_strlcat.c \
		ft_strrchr.c \
		ft_isalnum.c \
		ft_memmove.c \
		ft_split.c \
		ft_strlcpy.c \
		ft_strtrim.c \
		ft_isalpha.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_substr.c \
		ft_isascii.c \
		ft_putchar_fd.c \
		ft_strdup.c \
		ft_strmapi.c \
		ft_tolower.c \

SRCSB =	ft_lstnew.c			\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstclear.c		\
		ft_lstdelone.c		\
		ft_lstiter.c		\
		ft_lstmap.c			\
		$(SRCS)
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(SRCSB:.c=.o)

# Compile Library
all: $(NAME) 

$(NAME): $(OBJS)
	ar rcs $(NAME) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Cleaning Commands
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME) a.out

re:	fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# Exclude these commands from execution
.PHONY: all clean fclean re bonus