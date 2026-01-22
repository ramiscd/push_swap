/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 22:38:19 by rdamasce          #+#    #+#             */
/*   Updated: 2026/01/21 21:49:16 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		size;

	if (argc < 2)
		return (0);
	a = parse_args(argc, argv);
	b = NULL;
	if (!a || stack_is_sorted(a))
		return (0);

	size = stack_size(a);

	if (size == 2)
		sort_two(&a);
	else if (size == 3)
		sort_three(&a);
	else if (size <= 5)
		sort_five(&a, &b);
	else
	{
		index_stack(a, size);
		radix_sort(&a, &b);
	}
	return (0);
}
