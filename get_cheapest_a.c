/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cheapest_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:47:27 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/17 14:56:23 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	count_steps(t_stack *tmp, t_stack *target, int *num)
{
	if (tmp->steps_up == target->steps_up
		&& tmp->steps_down == target->steps_down)
		*num = tmp->steps_down + tmp->steps_up;
	else
		*num = tmp->steps_down + target->steps_up
			+ tmp->steps_up + target->steps_down;
}

t_stack	*get_cheapest_a(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*cheapest;
	int		c;
	int		num;
	t_stack	*target;

	tmp = *a;
	c = tmp->steps_down + get_target_a(tmp, b)->steps_up
		+ tmp->steps_up + get_target_a(tmp, b)->steps_down;
	cheapest = tmp;
	while (tmp)
	{
		target = get_target_a(tmp, b);
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
