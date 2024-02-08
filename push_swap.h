/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:45:53 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/06 13:55:36 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				num;
	int				steps_up;
	int				steps_down;
	struct s_stack	*next;
	struct s_stack	*prev;
}				t_stack;

char	**ft_split(char const *s, char c);
long	ft_atoi(const char *str);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
int		is_num(char *str);
void	handle_error(void);
int		check_doubles(t_stack *stack, int num);
int		check_max_int(long num);
void	free_stack(t_stack **stack);
void	free_argv(char **argv);
int		fill_next_node(t_stack **stack, char **str, int i, t_stack **new);
void	fill_stack(t_stack **stack, char **str);
int		check_sorted(t_stack **a);
void	sort_three(t_stack **a);
int		check_largest(t_stack **a, int n);
int		check_least(t_stack **a, int n);
t_stack	*get_smallest(t_stack **a);
t_stack	*get_biggest(t_stack **a);
int		node_position(t_stack **a, t_stack *target);
int		count_stack(t_stack **a);
void	sort_five(t_stack **a, t_stack **b);
void	sort_four(t_stack **a, t_stack **b);
t_stack	*get_target_a(t_stack *x, t_stack **b);
t_stack	*get_target_b(t_stack *x, t_stack **b);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*get_closest_node(t_stack **a, int num);
t_stack	*get_node(t_stack **a, int n);
void	sort_with_median(t_stack **a, t_stack **b);
void	push_to_b_mid(t_stack **a, t_stack **b, int i, t_stack *mid_node);
void	calculate_push(t_stack *x, t_stack **stack);
void	set_steps(t_stack **a, t_stack **b);
t_stack	*get_cheapest_a(t_stack **a, t_stack **b);
t_stack	*get_cheapest_b(t_stack **a, t_stack **b);
void	check_double_rotation(t_stack **a, t_stack **b,
			t_stack *tmp, t_stack *target);
void	check_b_rotation(t_stack **b, t_stack *tmp);
void	check_a_rotation(t_stack **a, t_stack *target);
void	push_to_b(t_stack **a, t_stack **b, int i, t_stack *tmp);
void	push_to_a(t_stack **a, t_stack **b, int i, t_stack *tmp);
void	smallest_to_top(t_stack **a);
void	sort_with_turk(t_stack **a, t_stack **b);
void	fill_and_sort(t_stack **stack1, t_stack **stack2, char **argv);
int		ft_len(char **str);
void	free_and_exit(t_stack **stack, char **str);
char	*ft_strdup(const char *s1);
char	**allocate_argv(char **argv, int argc);
int		count_digits(char *str);

#endif