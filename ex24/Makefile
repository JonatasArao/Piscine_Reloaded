CC		= cc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a
RM		= rm -rf
SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS	= $(SRCS:.c=.o)
HEADER	= includes/libft.h

all: $(NAME) clean

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE) all
