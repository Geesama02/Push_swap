/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_instructions_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:46:08 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/18 16:28:14 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_instructions(char *line)
{
	int	i;

	i = 0;
	if (ft_strcmp(line, "sa\n") || ft_strcmp(line, "sb\n")
		|| ft_strcmp(line, "ss\n") || ft_strcmp(line, "pa\n")
		|| ft_strcmp(line, "pb\n") || ft_strcmp(line, "ra\n")
		|| ft_strcmp(line, "rb\n") || ft_strcmp(line, "rr\n")
		|| ft_strcmp(line, "rra\n") || ft_strcmp(line, "rrb\n")
		|| ft_strcmp(line, "rrr\n"))
		return (0);
	return (1);
}
