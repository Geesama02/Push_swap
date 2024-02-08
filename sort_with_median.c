/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_with_median.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:57:03 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/06 13:55:44 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	mid_to_top(t_stack **a, t_stack *mid_node)
{
	while (mid_node != (*a))
	{
		if (node_position(a, mid_node) <= (count_stack(a) + 1) / 2)
			ra(a);
		else
			rra(a);
	}
}

void	sort_with_median(t_stack **a, t_stack **b)
{
	int		mid;
	t_stack	*mid_node;
	t_stack	*tmp;
	int		i;

	i = count_stack(a) - 4;
	if (get_smallest(a)->num < 0)
		mid = ((get_biggest(a)->num + get_smallest(a)->num)) / 2;
	else
		mid = ((get_biggest(a)->num - get_smallest(a)->num)) / 2;
	tmp = *a;
	if (!get_node(a, mid))
		mid_node = get_closest_node(a, mid);
	else
		mid_node = get_node(a, mid);
	mid_to_top(a, mid_node);
	pb(a, b);
	push_to_b_mid(a, b, i, mid_node);
	sort_three(a);
	push_to_a(a, b, i, tmp);
	smallest_to_top(a);
}
