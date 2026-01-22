/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 22:38:29 by rdamasce          #+#    #+#             */
/*   Updated: 2026/01/21 22:25:11 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_number(char *s)
{
	int	i;

	if (!s || !s[0])
		return (0);
	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

long	ft_atol_strict(char *s, int *error)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	*error = 0;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s)
	{
		result = result * 10 + (*s - '0');
		if ((sign == 1 && result > INT_MAX)
			|| (sign == -1 && - result < INT_MIN))
		{
			*error = 1;
			return (0);
		}
		s++;
	}
	return (result * sign);
}

static void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

static int	has_duplicates(t_node *stack)
{
	t_node	*tmp1;
	t_node	*tmp2;

	tmp1 = stack;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if (tmp1->value == tmp2->value)
				return (1);
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
	return (0);
}

t_node	*parse_args(int argc, char **argv)
{
	t_node	*stack_a;
	long	value;
	int		error;
	int		i;

	stack_a = NULL;
	i = 1;
	while (i < argc)
	{
		if (!is_valid_number(argv[i]))
			error_exit();
		value = ft_atol_strict(argv[i], &error);
		if (error)
			error_exit();
		node_add_back(&stack_a, node_new((int)value));
		i++;
	}
	if (has_duplicates(stack_a))
		error_exit();
	return (stack_a);
}
