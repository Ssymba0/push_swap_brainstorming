#include "push_swap.h"

t_stack	*stack_init(void)
{
	t_stack	*stack;

	stack = (t_stack*)malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	stack->size = 0;
	stack->top = 0;
	return (stack);
}

t_node	*create_elem(int data)
{
	t_node	*elem;

	elem = (t_node*)malloc(sizeof(t_node));
	if (!elem)
		return (0);
	elem->data = data;
	elem->next = (void*)0;
	return (elem);
}

int	stack_push(t_stack *stack, int data)
{
	t_node	*new;

	if (!stack || !(new = create_elem(data)))
		return (0);
	new->next = stack->top;
	stack->top = new;
	stack->size += 1;
	return (1);
}

int	stack_size(t_stack *stack)
{
	int size;

	if (!stack)
		return (0);
	size = stack->size;
	return (size);
}

t_node	*stack_peek(t_stack	*stack)
{
	if (!stack)
		return ((void*)0);
	return (stack->top);
}

t_node	*stack_pop(t_stack *stack)
{
	t_node *pop;

	if (!stack || stack->size <= 0)
		return ((void*)0);
	stack->size -= 1;
	pop = (t_node*)malloc(sizeof(t_node));
	if (!pop)
		return ((void*)0);
	pop->data = stack->top->data;
	pop->next = 0;
	free(stack->top);
	stack->top = stack->top->next;
	return (pop);
}

void	stack_clear(t_stack *stack, void (*free_data)(int))
{
	t_node	*head;
	t_node	*temp;

	if (!stack)
		return ;
	head = stack->top;
	stack->top = 0;
	stack->size = 0;
	while (head)
	{
		temp = head;
		head = head->next;
		temp->next = 0;
		free_data(temp->data);
		free(temp);
	}
}

void	free_stack(t_stack *stack, void (*free_data)(int))
{
	if (!stack || !free_data)
		return ;
	stack_clear(stack, free_data);
	free(stack);
}