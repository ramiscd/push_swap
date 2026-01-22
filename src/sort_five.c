/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:27:10 by rdamasce          #+#    #+#             */
/*   Updated: 2026/01/21 22:27:34 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_node **a, t_node **b)
{
	int	min;
	int	pos;
	int	size;

	while (stack_size(*a) > 3)
	{
		min = find_min(*a);
		pos = find_position(*a, min);
		size = stack_size(*a);
		if (pos <= size / 2)
		{
			while ((*a)->value != min)
				ra(a);
		}
		else
		{
			while ((*a)->value != min)
				rra(a);
		}
		pb(a, b);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}
