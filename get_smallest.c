/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_smallest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:37:37 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/06 11:42:31 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_smallest(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*smallest;

	tmp = *a;
	smallest = tmp;
	while (tmp)
	{
		if (tmp->num < smallest->num)
			smallest = tmp;
		tmp = tmp->next;
	}
	return (smallest);
}
