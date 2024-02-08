/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:29:24 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/06 11:31:39 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	count_digits(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && (str[i] == '0' || str[i] == ' '
			|| str[i] == '-' || str[i] == '+'))
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		i++;
		j++;
	}
	return (j);
}

static void	if_many_args(t_stack **stack, char **str, char **tmp, t_stack **new)
{
	(*new) = malloc(sizeof(t_stack));
	if (!(*new) || check_max_int(ft_atoi(tmp[0])) || !is_num(tmp[0])
		|| count_digits(tmp[0]) > 11)
	{
		free_argv(tmp);
		free(*new);
		free_and_exit(stack, str);
	}
	(*new)->num = ft_atoi(tmp[0]);
	(*new)->next = NULL;
	(*new)->prev = NULL;
	*stack = (*new);
	if (!fill_next_node(stack, tmp, 1, new))
	{
		free_argv(tmp);
		free_and_exit(stack, str);
	}
	free_argv(tmp);
	*new = ft_lstlast(*stack);
	if (!fill_next_node(stack, str, 1, new))
		free_and_exit(stack, str);
}

static void	if_one_arg(t_stack **stack, char **str, char **tmp, t_stack **new)
{
	(*new) = malloc(sizeof(t_stack));
	if (!(*new) || check_max_int(ft_atoi(str[0])) || !is_num(tmp[0])
		|| count_digits(tmp[0]) > 11)
	{
		free_argv(tmp);
		free(*new);
		free_and_exit(stack, str);
	}
	(*new)->num = ft_atoi(tmp[0]);
	(*new)->next = NULL;
	(*new)->prev = NULL;
	*stack = (*new);
	free_argv(tmp);
	if (!fill_next_node(stack, str, 1, new))
		free_and_exit(stack, str);
}

void	fill_stack(t_stack **stack, char **str)
{
	t_stack	*new;
	char	**tmp;

	tmp = ft_split(str[0], ' ');
	if (!tmp)
		free_and_exit(stack, str);
	if (ft_len(tmp) > 1)
		if_many_args(stack, str, tmp, &new);
	else
		if_one_arg(stack, str, tmp, &new);
}
