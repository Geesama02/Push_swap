/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_target_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:42:30 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/05 17:10:50 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_target_a(t_stack *x, t_stack **b)
{
	t_stack	*target;
	t_stack	*tmp;

	if (check_largest(b, x->num))
	{
		target = get_smallest(b);
		return (target);
	}
	target = get_biggest(b);
	tmp = *b;
	while (tmp)
	{
		if (tmp->num < target->num && tmp->num > x->num)
			target = tmp;
		tmp = tmp->next;
	}
	return (target);
}
