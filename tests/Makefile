NAME = test

SRCS = main.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror -I../includes

all: $(NAME)

$(NAME): $(OBJS) ../libftprintf.a
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) ../libftprintf.a

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re