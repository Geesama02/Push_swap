/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_and_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:58:05 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/06 13:18:59 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_and_sort(t_stack **stack1, t_stack **stack2, char **argv)
{
	fill_stack(stack1, argv);
	free_argv(argv);
	if (check_sorted(stack1))
	{
		free_stack(stack1);
		exit(0);
	}
	if (count_stack(stack1) == 2)
		sa(stack1);
	else if (count_stack(stack1) == 3)
		sort_three(stack1);
	else if (count_stack(stack1) == 4)
		sort_four(stack1, stack2);
	else if (count_stack(stack1) == 5)
		sort_five(stack1, stack2);
	else if (count_stack(stack1) > 5)
		sort_with_turk(stack1, stack2);
	free_stack(stack1);
}
