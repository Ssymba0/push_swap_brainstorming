NAME = push_swap

SRCS = parsing_utils.c\
	push.c\
	swap.c\
	rotate.c\
	reverse_rotate.c\
	checker.c\
	main.c\
	bigsort.c\
	biggest_smallest.c\
	bigsort_utils.c\

BONUS_SRCS = bonus_checker.c\
	ft_split.c\
	ft_strcmp.c\
	is_sorted.c\
	parsing_utils.c\
	push.c\
	reverse_rotate.c\
	rotate.c\
	swap.c

OBJS = $(SRCS:%.c=%.o)

BONUS_OBJ = $(BONUS_SRCS:%.c=%.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o push_swap


all : $(NAME)

bonus: $(BONUS_OBJ)
	@$(CC) $(CFLAGS) $(BONUS_OBJ) -o checker
clean:
	rm -f $(OBJS) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all