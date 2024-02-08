/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:22:37 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/07 11:22:16 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	found_num(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

int	is_num(char *str)
{
	int	i;

	i = 0;
	if (!found_num(str))
		return (0);
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
