/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-laa <oait-laa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:15:45 by oait-laa          #+#    #+#             */
/*   Updated: 2024/01/24 10:16:01 by oait-laa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s1)
{
	char	*pntr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	pntr = malloc(i + 1);
	if (!pntr)
		return (NULL);
	while (j < i)
	{
		pntr[j] = s1[j];
		j++;
	}
	pntr[j] = '\0';
	return (pntr);
}
