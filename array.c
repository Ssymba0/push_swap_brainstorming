#include "array.h"

t_stack	*stack_init(unsigned int max_size)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(max_size * sizeof(t_stack));
	if (!stack)
		return ((void*)0);
	stack->data = (int *)calloc(max_size, sizeof(int));
	stack->max_size = max_size;
	stack->top_index = -1;
	return (stack);
}

int		stack_push(t_stack *stack, int data)
{
	if (!stack || stack->top_index + 1 >= stack->max_size)
		return (0);
	stack->top_index += 1;
	stack->data[stack->top_index] = data;
}

int		stack_size(t_stack *stack)
{
	if (!stack)
		return (0);
	return (stack->top_index + 1);
}

void	*stack_peek(t_stack *stack)
{
	if (!stack)
		return (0);
	return (stack->data[stack->top_index]);
}

void	*stack_pop(t_stack	*stack)
{
	int	*ret;

	if (!stack)
		return (0);
	ret = stack->data[stack->top_index];
	stack->data[stack->top_index] = 0;
	stack->top_index -= 1;
	return (ret);
}

void	stack_clear(t_stack *stack, void (*free_data)(void *))
{
	if (!stack)
		return ;
	
}