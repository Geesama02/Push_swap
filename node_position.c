/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:39:03 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/17 14:59:03 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	node_position(t_stack **a, t_stack *target)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *a;
	while (tmp != target)
	{
		i++;
		tmp = tmp->next;
	}
	return (i + 1);
}
