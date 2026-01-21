/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 22:38:37 by rdamasce          #+#    #+#             */
/*   Updated: 2026/01/20 22:46:28 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_node **a, t_node **b)
{
	int i, j, size, max_num;
	int max_bits;
	t_node *tmp;

	size = stack_size(*a);
	max_num = size - 1;

	// calcular número de bits necessários
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;

	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			tmp = *a;
			if (((tmp->index >> i) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
