/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:54:51 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/07 11:22:19 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_a(t_stack **a, t_stack **b, int i, t_stack *tmp)
{
	t_stack	*target_a;

	i = count_stack(b);
	while (i != 0)
	{
		set_steps(a, b);
		tmp = get_cheapest_a(b, a);
		target_a = get_target_a(tmp, a);
		check_double_rotation(a, b, tmp, target_a);
		check_b_rotation(b, tmp);
		check_a_rotation(a, target_a);
		pa(a, b);
		i--;
	}
}
