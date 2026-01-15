#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}   t_node;

/* stack */
t_node		*node_new(int value);
void		node_add_back(t_node **stack, t_node *new);
void		stack_print(t_node *stack);
long		ft_atol_strict(char *s, int *error);
int			is_valid_number(char *s);
t_node		*parse_args(int argc, char **argv);
static int	has_duplicates(t_node *stack);
int			stack_is_sorted(t_node *stack);


#endif
