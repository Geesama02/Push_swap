/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:55:14 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/06 13:55:28 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b_mid(t_stack **a, t_stack **b, int i, t_stack *mid_node)
{
	while (i != 0)
	{
		if ((*a)->num > mid_node->num)
		{
			pb(a, b);
			rb(b);
		}
		else
			pb(a, b);
		i--;
	}
}

void	push_to_b(t_stack **a, t_stack **b, int i, t_stack *tmp)
{
	t_stack	*target_b;

	while (i != 0)
	{
		set_steps(a, b);
		tmp = get_cheapest_b(b, a);
		target_b = get_target_b(tmp, a);
		check_double_rotation(a, b, tmp, target_b);
		check_a_rotation(b, tmp);
		check_b_rotation(a, target_b);
		pb(b, a);
		i--;
	}
}
