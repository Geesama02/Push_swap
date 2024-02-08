/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_biggest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:38:25 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/17 14:30:05 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_biggest(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*biggest;

	tmp = *a;
	biggest = tmp;
	while (tmp)
	{
		if (tmp->num > biggest->num)
			biggest = tmp;
		tmp = tmp->next;
	}
	return (biggest);
}
