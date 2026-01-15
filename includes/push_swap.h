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
} t_node;

/* stack */
t_node	*node_new(int value);
void	node_add_back(t_node **stack, t_node *new);
void	stack_print(t_node *stack);
int		stack_size(t_node *stack);

/* parsing */
long	ft_atol_strict(char *s, int *error);
int		is_valid_number(char *s);
t_node	*parse_args(int argc, char **argv);

/* utils */
int		stack_is_sorted(t_node *stack);

/* indexing */
int		*stack_to_array(t_node *stack, int size);
void	sort_array(int *arr, int size);
void	index_stack(t_node *stack, int size);

#endif
