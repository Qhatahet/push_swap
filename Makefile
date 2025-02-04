CC = cc

CFLAGS = -Werror -Wextra -Wall

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

SRCS = errors.c init_a_to_b.c init_b_to_a.c main.c sort_stacks.c stack_a.c stack_init.c stack_op.c  stack_utils.c test3.c stack_b.c rrr_rr.c\

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
