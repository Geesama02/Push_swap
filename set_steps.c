/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_steps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:46:49 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/17 15:00:54 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_steps(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp)
	{
		calculate_push(tmp, a);
		tmp = tmp->next;
	}
	tmp = *b;
	while (tmp)
	{
		calculate_push(tmp, b);
		tmp = tmp->next;
	}
}
