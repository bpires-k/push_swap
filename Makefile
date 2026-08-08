NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src

SRC_INC = \
	main.c \
	push.c \
	swap.c \
	rotate.c \
	reverse_rotate.c \
	simple_algo.c \
	medium_algo.c \
	complex_algo.c \
	custom_algo.c \
	init_stack.c \
	ft_ladd_back.c \
	ft_ladd_front.c \
	ft_ldelone.c \
	ft_lclear.c \
	ft_liter.c \
	ft_llast.c \
	ft_lsize.c \
	ft_lnew.c \
	helper_funct.c

SRC = $(addprefix $(SRC_DIR)/, $(SRC_INC))
OBJ = $(SRC:.c=.o)

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

INCLUDES = -I. -I$(LIBFT_DIR) -Isrc

all: $(LIBFT) $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
