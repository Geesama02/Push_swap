/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_largest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:34:13 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/17 14:24:00 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_largest(t_stack **a, int n)
{
	t_stack	*tmp;

	if (!(*a))
		return (1);
	tmp = *a;
	while (tmp)
	{
		if (tmp->num > n)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
