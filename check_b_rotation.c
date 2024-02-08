/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_b_rotation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:53:13 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/17 14:20:35 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_b_rotation(t_stack **b, t_stack *tmp)
{
	int	b_count;
	int	b_pos;

	b_count = count_stack(b);
	b_pos = node_position(b, tmp);
	while (tmp->steps_up != 0 || tmp->steps_down != 0)
	{
		if (b_pos <= (b_count + 1) / 2)
		{
			rb(b);
			tmp->steps_up--;
		}
		else
		{
			rrb(b);
			tmp->steps_down--;
		}
	}
}
