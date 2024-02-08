/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_doubles_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:24:53 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/06 11:35:38 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_doubles(t_stack *stack, int num)
{
	while (stack)
	{
		if (stack->num == num)
			return (1);
		stack = stack->next;
	}
	return (0);
}
