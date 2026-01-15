#include "../includes/push_swap.h"
#include "../libft/libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	t_node *stack_a;

	if (argc < 2)
		return 0;

	stack_a = parse_args(argc, argv);
	if (stack_is_sorted(stack_a))
		return (0);
	stack_print(stack_a);

	return 0;
}
