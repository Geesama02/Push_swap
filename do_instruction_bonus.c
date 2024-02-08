/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_instruction_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:48:23 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/18 16:26:06 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	do_instruction(t_stack **a, t_stack **b, char *instruction)
{
	if (ft_strcmp(instruction, "sa\n"))
		sa(a);
	else if (ft_strcmp(instruction, "sb\n"))
		sb(b);
	else if (ft_strcmp(instruction, "ss\n"))
		ss(a, b);
	else if (ft_strcmp(instruction, "pa\n"))
		pa(a, b);
	else if (ft_strcmp(instruction, "pb\n"))
		pb(a, b);
	else if (ft_strcmp(instruction, "ra\n"))
		ra(a);
	else if (ft_strcmp(instruction, "rb\n"))
		rb(b);
	else if (ft_strcmp(instruction, "rr\n"))
		rr(a, b);
	else if (ft_strcmp(instruction, "rra\n"))
		rra(a);
	else if (ft_strcmp(instruction, "rrb\n"))
		rrb(b);
	else if (ft_strcmp(instruction, "rrr\n"))
		rrr(a, b);
}
