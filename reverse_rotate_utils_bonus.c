/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_utils_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:14:30 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/18 20:49:29 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	reverse_rotate(t_stack **s)
{
	t_stack	*head;
	t_stack	*last;

	if (!(*s) || !(*s)->next)
		return ;
	head = *s;
	last = *s;
	while (last->next)
		last = last->next;
	last->next = head;
	last->prev->next = NULL;
	(*s)->prev = last;
	*s = last;
	(*s)->prev = NULL;
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}
