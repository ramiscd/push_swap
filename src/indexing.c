#include "../includes/push_swap.h"
#include <stdlib.h>

/* função privada do módulo */
static void assign_index(t_node *stack, int *arr, int size)
{
	int i;

	while (stack)
	{
		i = 0;
		while (i < size)
		{
			if (stack->value == arr[i])
			{
				stack->index = i;
				break;
			}
			i++;
		}
		stack = stack->next;
	}
}

int *stack_to_array(t_node *stack, int size)
{
	int *arr;
	int i;

	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);

	i = 0;
	while (stack)
	{
		arr[i++] = stack->value;
		stack = stack->next;
	}
	return (arr);
}

void sort_array(int *arr, int size)
{
	int i;
	int tmp;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}

void index_stack(t_node *stack, int size)
{
	int *arr;

	arr = stack_to_array(stack, size);
	if (!arr)
		return ;
	sort_array(arr, size);
	assign_index(stack, arr, size);
	free(arr);
}
