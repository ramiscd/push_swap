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

	pb(&a, &b);
	pb(&a, &b);

	rra(&a);
	rrb(&b);
	rrr(&a, &b);

	write(1, "Stack A: ", 9);
	stack_print(a);
	write(1, "Stack B: ", 9);
	stack_print(b);

	return (0);
}



