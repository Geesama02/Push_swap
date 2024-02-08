/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_a_rotation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:53:53 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/17 14:20:16 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_a_rotation(t_stack **a, t_stack *target)
{
	int	a_count;
	int	a_pos;

	a_count = count_stack(a);
	a_pos = node_position(a, target);
	while (target->num != (*a)->num)
	{
		if (a_pos <= (a_count + 1) / 2)
		{
			ra(a);
			target->steps_up--;
		}
		else
		{
			rra(a);
			target->steps_down--;
		}
	}
}
