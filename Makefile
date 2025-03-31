CC = cc -g

FLAGS = -Wall -Wextra -Werror

NAME = pushswap.a

LIBFT = ./libft/libft.a
LIBFTDIR = ./libft
LIBFT_SRCS = ./files

SRCS = push_swap.c args_checker.c tools.c sort.c nodes_tools.c sort_tools.c\
       ./lst_func/ft_lstnew.c \
       ./lst_func/ft_lstadd_back.c \
       ./lst_func/ft_lstlast.c \
       ./lst_func/ft_lstclear.c \
       ./lst_func/ft_lstsize.c \
       ./lst_func/ft_lst2last.c \
       ./op/push.c \
       ./op/swap.c \
       ./op/rotate.c \
       ./op/reverse_rotate.c \
	

OBJS = $(SRCS:.c=.o)

all: $(NAME) push_swap

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(OBJS)

$(LIBFT): $(LIBFTDIR)
	$(MAKE) -C $(LIBFTDIR)

%.o: $(LIBFT_SRCS)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

push_swap: $(OBJS) $(NAME)
	$(CC) $(CFLAGS) $(OBJS) $(NAME) -o push_swap

valgrind: $(NAME)
	valgrind --leak-check=full --track-origins=yes ./push_swap $(ARGS)

gdb: $(NAME)
	gdb --tui --args ./push_swap $(ARGS)

clean:
	$(MAKE) fclean -C $(LIBFTDIR)
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) push_swap

re: fclean all

.PHONY:		all clean fclean re
