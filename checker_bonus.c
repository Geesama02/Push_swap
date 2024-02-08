/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:27:30 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/28 11:13:51 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack1;
	t_stack	*stack2;
	int		i;

	i = 0;
	stack1 = NULL;
	stack2 = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (!argv)
			handle_error();
	}
	else
		argv = allocate_argv(argv, argc);
	fill_stack(&stack1, argv);
	free_argv(argv);
	get_instructions(&stack1, &stack2);
	return (0);
}
