/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_argv_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:16:20 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/06 11:23:17 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	**allocate_argv(char **argv, int argc)
{
	int		i;
	char	**str;

	i = 0;
	str = (char **)malloc(sizeof(char *) * argc);
	if (!str)
		handle_error();
	while (argv[i + 1])
	{
		str[i] = ft_strdup(argv[i + 1]);
		if (!str[i])
		{
			free_argv(str);
			handle_error();
		}
		i++;
	}
	str[i] = NULL;
	return (str);
}
