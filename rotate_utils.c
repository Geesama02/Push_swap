/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:31:31 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/19 10:40:48 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
