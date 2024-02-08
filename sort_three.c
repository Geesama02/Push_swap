/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:33:17 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/18 17:08:39 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	if (check_sorted(a))
		return ;
	if ((*a)->num < (*a)->next->num && (*a)->num < (*a)->next->next->num)
	{
		sa(a);
		ra(a);
	}
	else if ((*a)->num > (*a)->next->num
		&& (*a)->next->num > (*a)->next->next->num)
	{
		sa(a);
		rra(a);
	}
	else if ((*a)->num > (*a)->next->num
		&& (*a)->next->num < (*a)->next->next->num
		&& (*a)->num > (*a)->next->next->num)
		ra(a);
	else if ((*a)->num > (*a)->next->num
		&& (*a)->next->num < (*a)->next->next->num
		&& (*a)->num < (*a)->next->next->num)
		sa(a);
	else
		rra(a);
}
