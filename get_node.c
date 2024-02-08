/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:49:46 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/17 14:57:38 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_node(t_stack **a, int n)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp)
	{
		if (tmp->num == n)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
