/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:40:36 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/18 17:07:24 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (check_sorted(a))
		return ;
	tmp = get_smallest(a);
	while (tmp->num != (*a)->num)
	{
		if (node_position(a, tmp) <= (count_stack(a) + 1) / 2)
			ra(a);
		else
			rra(a);
	}
	pb(a, b);
	tmp = get_smallest(a);
	while (tmp->num != (*a)->num)
	{
		if (node_position(a, tmp) <= (count_stack(a) + 1) / 2)
			ra(a);
		else
			rra(a);
	}
	pb(a, b);
	sort_three(a);
	pa(a, b);
	pa(a, b);
}
