/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_with_turk.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:57:03 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/06 11:12:39 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_target_b(t_stack *x, t_stack **b)
{
	t_stack	*target;
	t_stack	*tmp;

	if (check_least(b, x->num))
	{
		target = get_biggest(b);
		return (target);
	}
	target = get_smallest(b);
	tmp = *b;
	while (tmp)
	{
		if (tmp->num > target->num && tmp->num < x->num)
			target = tmp;
		tmp = tmp->next;
	}
	return (target);
}

static void	count_steps(t_stack *tmp, t_stack *target, int *num)
{
	if (tmp->steps_up == target->steps_up
		&& tmp->steps_down == target->steps_down)
		*num = tmp->steps_down + tmp->steps_up;
	else
		*num = tmp->steps_down + target->steps_up
			+ tmp->steps_up + target->steps_down;
}

t_stack	*get_cheapest_b(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*cheapest;
	int		c;
	int		num;
	t_stack	*target;

	tmp = *a;
	c = tmp->steps_down + get_target_b(tmp, b)->steps_up
		+ tmp->steps_up + get_target_b(tmp, b)->steps_down;
	cheapest = tmp;
	while (tmp)
	{
		target = get_target_b(tmp, b);
		count_steps(tmp, target, &num);
		if (c > num)
		{
			c = num;
			cheapest = tmp;
		}
		tmp = tmp->next;
	}
	return (cheapest);
}

static void	biggest_to_top(t_stack **b)
{
	t_stack	*tmp;
	int		i;

	i = count_stack(b);
	tmp = get_biggest(b);
	while (tmp != (*b))
	{
		if (node_position(b, tmp) <= (i + 1) / 2)
			rb(b);
		else
			rrb(b);
	}
}

void	sort_with_turk(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	int		i;

	if (count_stack(a) > 100)
	{
		sort_with_median(a, b);
		return ;
	}
	i = count_stack(a) - 5;
	tmp2 = *b;
	tmp = *a;
	pb(a, b);
	pb(a, b);
	push_to_b(b, a, i, tmp2);
	biggest_to_top(b);
	sort_three(a);
	push_to_a(a, b, i, tmp);
	smallest_to_top(a);
}
