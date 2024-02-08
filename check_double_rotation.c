/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double_rotation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:51:50 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/17 14:23:03 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	double_rotation(t_stack **a, t_stack **b,
			t_stack *tmp, t_stack *target)
{
	rr(a, b);
	tmp->steps_up--;
	target->steps_up--;
}

static void	double_reverse_rotation(t_stack **a, t_stack **b,
			t_stack *tmp, t_stack *target)
{
	rrr(a, b);
	tmp->steps_down--;
	target->steps_down--;
}

void	check_double_rotation(t_stack **a, t_stack **b,
		t_stack *tmp, t_stack *target)
{
	int	a_count;
	int	b_count;
	int	a_pos;
	int	b_pos;

	a_count = count_stack(a);
	b_count = count_stack(b);
	a_pos = node_position(a, target);
	b_pos = node_position(b, tmp);
	while (target->num != (*a)->num
		&& (tmp->steps_up != 0 || tmp->steps_down != 0)
		&& ((a_pos <= (a_count + 1) / 2 && b_pos <= (b_count + 1) / 2)
			|| (a_pos > (a_count + 1) / 2 && b_pos > (b_count + 1) / 2)))
	{
		if (a_pos <= (a_count + 1) / 2 && b_pos <= (b_count + 1) / 2)
			double_rotation(a, b, tmp, target);
		else if (a_pos > (a_count + 1) / 2 && b_pos > (b_count + 1) / 2)
			double_reverse_rotation(a, b, tmp, target);
	}
}
