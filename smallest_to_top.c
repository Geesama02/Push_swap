/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest_to_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:56:09 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/17 15:29:35 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	smallest_to_top(t_stack **a)
{
	t_stack	*smallest;
	int		a_len;
	int		a_pos;

	a_len = count_stack(a);
	smallest = get_smallest(a);
	a_pos = node_position(a, smallest);
	while (smallest->num != (*a)->num)
	{
		if (a_pos <= (a_len + 1) / 2)
			ra(a);
		else
			rra(a);
	}
}
