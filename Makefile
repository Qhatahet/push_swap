CC = cc

CFLAGS = -Werror -Wextra -Wall

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

SRCS = linkedlist.c stack_a_op.c stack_b_op.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME) 

$(NAME) : $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

$(LIBFT):
	$(MAKE) bonus -C $(LIBFT_DIR)

clean:
	rm -f $(OBJS)
	$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C $(LIBFT_DIR)
re: fclean all

.PHONY:fclean all clean re