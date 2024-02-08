/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_instructions_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:49:55 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/06 11:42:20 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	get_instructions(t_stack **a, t_stack **b)
{
	char	*line;
	int		i;

	i = 0;
	line = get_next_line(0);
	handle_lines(a, b, line);
}
