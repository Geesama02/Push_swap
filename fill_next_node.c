/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_next_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:28:46 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/03 12:18:06 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_len(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	free_and_exit(t_stack **stack, char **str)
{
	free_argv(str);
	free_stack(stack);
	handle_error();
}

static int	fill_node(t_stack **stack, char **str, int i, t_stack **new)
{
	if (count_digits(str[i]) > 11 || check_doubles(*stack, ft_atoi(str[i]))
		|| check_max_int(ft_atoi(str[i])) || !is_num(str[i]))
		return (0);
	(*new)->next = malloc(sizeof(t_stack));
	if (!(*new)->next)
		return (0);
	(*new)->next->num = ft_atoi(str[i]);
	(*new)->next->prev = (*new);
	(*new) = (*new)->next;
	(*new)->next = NULL;
	return (1);
}

int	fill_next_node(t_stack **stack, char **str, int i, t_stack **new)
{
	char	**tmp;

	while (str[i])
	{
		tmp = ft_split(str[i], ' ');
		if (!tmp)
			free_and_exit(stack, str);
		if (ft_len(tmp) > 1)
		{
			if (!fill_next_node(stack, tmp, 0, new))
			{
				free_argv(tmp);
				return (0);
			}
			free_argv(tmp);
		}
		else
		{
			free_argv(tmp);
			if (!fill_node(stack, str, i, new))
				return (0);
		}
		i++;
	}
	return (1);
}
