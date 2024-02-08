CFLAGS = -Wall -Wextra -Werror
CC = cc
NAME = push_swap
BONUS = checker
SRC = ft_split.c push_swap.c ft_atoi.c swap_utils.c push_utils.c rotate_utils.c \
		reverse_rotate_utils.c is_num.c handle_error.c check_doubles.c get_closest_node.c \
		check_max_int.c sort_three.c sort_five.c ft_strdup.c free_stack.c free_argv.c \
		fill_next_node.c fill_stack.c check_sorted.c check_largest.c check_least.c \
		get_smallest.c get_biggest.c node_position.c count_stack.c allocate_argv.c get_node.c \
		sort_four.c get_target_a.c ft_lstlast.c calculate_push.c set_steps.c get_cheapest_a.c \
		check_double_rotation.c check_a_rotation.c check_b_rotation.c sort_with_median.c \
		push_to_b.c push_to_a.c smallest_to_top.c sort_with_turk.c fill_and_sort.c
BONUS_SRC = checker_bonus.c ft_split_bonus.c allocate_argv_bonus.c handle_error_bonus.c get_next_line_bonus.c get_next_line_utils_bonus.c \
			swap_utils_bonus.c push_utils_bonus.c rotate_utils_bonus.c reverse_rotate_utils_bonus.c check_sorted_bonus.c \
			ft_atoi_bonus.c ft_lstlast_bonus.c free_argv_bonus.c free_stack_bonus.c fill_stack_bonus.c check_max_int_bonus.c fill_next_node_bonus.c \
			check_doubles_bonus.c is_num_bonus.c ft_strcmp_bonus.c check_instructions_bonus.c do_instruction_bonus.c \
			handle_lines_bonus.c get_instructions_bonus.c 
OBJS = ${SRC:.c=.o}
BONUS_OBJS = ${BONUS_SRC:.c=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

%.o: %.c push_swap.h
	${CC} ${CFLAGS} -c -o $@ $<

${BONUS} : ${BONUS_OBJS}
	${CC} ${CFLAGS} ${BONUS_OBJS} -o ${BONUS}

bonus : ${BONUS}

${BONUS_OBJS}: %_bonus.o: %_bonus.c push_swap_bonus.h get_next_line_bonus.h
	${CC} ${CFLAGS} -c -o $@ $<

clean : 
	rm -rf ${OBJS} ${BONUS_OBJS}

fclean : clean
	rm -rf ${NAME} checker

re : fclean all

.PHONY : all clean fclean re bonus