/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 22:38:37 by rdamasce          #+#    #+#             */
/*   Updated: 2026/01/21 22:26:18 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "push_swap.h"

static int	get_max_bits(int size)
{
	int	max_bits;
	int	max_num;

	max_num = size - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

static void	process_bit(t_node **a, t_node **b, int bit, int size)
{
	int		j;
	t_node	*tmp;

	j = 0;
	while (j < size)
	{
		tmp = *a;
		if (((tmp->index >> bit) & 1) == 0)
			pb(a, b);
		else
			ra(a);
		j++;
	}
	while (*b)
		pa(a, b);
}

void	radix_sort(t_node **a, t_node **b)
{
	int	size;
	int	bit;
	int	max_bits;

	size = stack_size(*a);
	max_bits = get_max_bits(size);
	bit = 0;
	while (bit < max_bits)
	{
		process_bit(a, b, bit, size);
		bit++;
	}
}
