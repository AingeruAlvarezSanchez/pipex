NAME = pipex

RM = rm -rf
CC = clang
CFLAGS = -Wall -Werror -Wextra #-fsanitize=address -g3
FILES = pipex

SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(MAKE) -C ./ft_libft
	mv ./ft_libft/libft.a .
	$(CC) $(CFLAGS) $(OBJS) libft.a -o $(NAME)

clean:
	$(RM) $(OBJS)

all: $(NAME)

re: clean all

fclean: clean
	$(RM) $(NAME) libft.a

.PHONY: all re clean fclean
