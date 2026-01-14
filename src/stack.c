#include "../includes/push_swap.h"
#include <stdio.h>

t_node *node_new(int value)
{
    t_node *node;

    node = malloc(sizeof(t_node));
    if (!node)
        return (NULL);
    node->value = value;
    node->index = -1;   // ainda não indexado
    node->next = NULL;
    return (node);
}

void node_add_back(t_node **stack, t_node *new)
{
    t_node *tmp;

    if (!stack || !new)
        return;
    if (*stack == NULL)
    {
        *stack = new;
        return;
    }
    tmp = *stack;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
}

void stack_print(t_node *stack)
{
    while (stack)
    {
        printf("[%d] ", stack->value);
        stack = stack->next;
    }
    printf("\n");
}
