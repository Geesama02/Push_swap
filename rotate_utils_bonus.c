/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utils_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:31:31 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/18 20:48:26 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	rotate(t_stack **s)
{
	t_stack	*tmp;
	t_stack	*head;
	t_stack	*last;

	if (!(*s) || !(*s)->next)
		return ;
	head = *s;
	tmp = (*s)->next;
	last = *s;
	while (last->next)
		last = last->next;
	last->next = head;
	(*s)->next = NULL;
	(*s)->prev = last;
	*s = tmp;
	(*s)->prev = NULL;
}

void	ra(t_stack **a)
{
	rotate(a);
}

void	rb(t_stack **b)
{
	rotate(b);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}
