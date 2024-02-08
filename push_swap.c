/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:41:55 by oait-laa          #+#    #+#             */
/*   Updated: 2024/02/07 10:20:00 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack1;
	t_stack	*stack2;

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
	fill_and_sort(&stack1, &stack2, argv);
	return (0);
}
