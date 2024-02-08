/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:20:28 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/17 15:28:35 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!(*b))
		return ;
	tmp = (*b)->next;
	(*b)->next = (*a);
	if ((*a))
		(*a)->prev = (*b);
	(*a) = (*b);
	(*b) = tmp;
	if (tmp)
		tmp->prev = NULL;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!(*a))
		return ;
	tmp = (*a)->next;
	(*a)->next = (*b);
	if ((*b))
		(*b)->prev = (*a);
	(*b) = (*a);
	(*a) = tmp;
	if (tmp)
		tmp->prev = NULL;
	write(1, "pb\n", 3);
}
