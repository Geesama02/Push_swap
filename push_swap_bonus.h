/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:43:28 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/06 11:41:03 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# include "get_next_line_bonus.h"

typedef struct s_stack
{
	int				num;
	int				steps_up;
	int				steps_down;
	struct s_stack	*next;
	struct s_stack	*prev;
}				t_stack;

char	**ft_split(char const *s, char c);
char	**allocate_argv(char **argv, int argc);
void	handle_error(void);
int		check_sorted(t_stack **a);
long	ft_atoi(const char *str);
t_stack	*ft_lstlast(t_stack *lst);
void	free_argv(char **argv);
void	free_stack(t_stack **stack);
void	fill_stack(t_stack **stack, char **str);
int		check_max_int(long num);
int		fill_next_node(t_stack **stack, char **str, int i, t_stack **new);
int		check_doubles(t_stack *stack, int num);
int		is_num(char *str);
void	free_and_exit(t_stack **stack, char **str);
int		ft_len(char **str);
int		count_digits(char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		check_instructions(char *line);
void	do_instruction(t_stack **a, t_stack **b, char *instruction);
void	handle_lines(t_stack **a, t_stack **b, char *line);
void	get_instructions(t_stack **a, t_stack **b);
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

#endif