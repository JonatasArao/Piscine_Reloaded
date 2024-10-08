CC			= cc
CFLAGS		= -Wall -Wextra -Werror
NAME		= ft_display_file
RM			= rm -rf
SRCS		= main.c
OBJS		= $(SRCS:.c=.o)
INCLUDES	= includes

all: $(NAME) clean

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $(addprefix -I, $(INCLUDES)) $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
