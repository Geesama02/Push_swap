/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:53:18 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/18 16:54:12 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	swap(t_stack **s)
{
	t_stack	*tmp;

	if (!(*s) || !(*s)->next)
		return ;
	tmp = (*s)->next;
	(*s)->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = (*s);
	(*s)->prev = tmp;
	tmp->prev = NULL;
	tmp->next = *s;
	*s = tmp;
}

void	sa(t_stack **a)
{
	swap(a);
}

void	sb(t_stack **b)
{
	swap(b);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
}
