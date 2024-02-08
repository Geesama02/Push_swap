/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:44:39 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/17 14:19:53 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	count_steps_up(t_stack *x, t_stack **stack, int *count)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->num != x->num)
	{
		(*count)++;
		tmp = tmp->next;
	}
}

static void	count_steps_down(t_stack *x, t_stack *tmp, int *count)
{
	while (tmp->num != x->num)
	{
		(*count)++;
		tmp = tmp->prev;
	}
}

void	calculate_push(t_stack *x, t_stack **stack)
{
	t_stack	*tmp;
	int		count;

	count = 0;
	if (node_position(stack, x) <= (count_stack(stack) + 1) / 2)
	{
		count_steps_up(x, stack, &count);
		x->steps_up = count;
		x->steps_down = 0;
	}
	else
	{
		tmp = ft_lstlast(*stack);
		count_steps_down(x, tmp, &count);
		count++;
		x->steps_down = count;
		x->steps_up = 0;
	}
}
