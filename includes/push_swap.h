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
void	sort_two(t_node **a);
void	sort_three(t_node **a);
int		find_min(t_node *stack);
int		find_position(t_node *stack, int value);
void	sort_five(t_node **a, t_node **b);



/* indexing */
int		*stack_to_array(t_node *stack, int size);
void	sort_array(int *arr, int size);
void	index_stack(t_node *stack, int size);

/* operations */
void	sa(t_node **stack_a);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);

/* radix */
void	radix_sort(t_node **a, t_node **b);

#endif
