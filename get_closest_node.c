/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_closest_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:50:23 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/17 14:57:21 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_closest_node(t_stack **a, int num)
{
	t_stack	*tmp;
	t_stack	*closest;

	tmp = *a;
	closest = get_smallest(a);
	while (tmp)
	{
		if ((tmp->num > num && tmp->num < closest->num)
			|| (tmp->num < num && tmp->num > closest->num))
			closest = tmp;
		tmp = tmp->next;
	}
	return (closest);
}
