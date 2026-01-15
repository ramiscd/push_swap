#include "../includes/push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	t_node *a;
	t_node *b;

	if (argc < 2)
		return (0);

	a = parse_args(argc, argv);
	b = NULL;

	if (stack_is_sorted(a))
		return (0);

	index_stack(a, stack_size(a)); // importante!
	radix_sort(&a, &b);

	stack_print(a);
	return (0);
}

