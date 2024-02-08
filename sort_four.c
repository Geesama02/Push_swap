/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:41:26 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/17 15:17:09 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_a(t_stack **a, t_stack **b)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = *a;
	stack_b = *b;
	if (stack_b->num > stack_a->num && stack_b->num < stack_a->next->num)
	{
		ra(a);
		pa(a, b);
		rra(a);
		return ;
	}
	else if (stack_b->num > stack_a->num && stack_b->num > stack_a->next->num)
	{
		rra(a);
		pa(a, b);
		ra(a);
		ra(a);
		return ;
	}
}

void	sort_four(t_stack **a, t_stack **b)
{
	pb(a, b);
	sort_three(a);
	if (check_largest(a, (*b)->num))
	{
		pa(a, b);
		ra(a);
		return ;
	}
	else if (check_least(a, (*b)->num))
	{
		pa(a, b);
		return ;
	}
	push_a(a, b);
}
