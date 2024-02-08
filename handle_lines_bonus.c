/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_lines_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:49:09 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/28 10:57:08 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	handle_invalid_instruction(char *line, t_stack **a, t_stack **b)
{
	free(line);
	free_stack(a);
	if (*b)
		free_stack(b);
	handle_error();
}

void	handle_lines(t_stack **a, t_stack **b, char *line)
{
	while (line)
	{
		if (check_instructions(line))
			handle_invalid_instruction(line, a, b);
		do_instruction(a, b, line);
		free(line);
		line = get_next_line(0);
	}
	if (check_sorted(a) && !*b)
	{
		write(1, "OK\n", 3);
		free_stack(a);
		exit(0);
	}
	else
	{
		write(1, "KO\n", 3);
		free_stack(a);
		if (*b)
			free_stack(b);
		exit(0);
	}
}
