#include "push_swap.h"

void	sa(t_stack *stack)
{
	t_node	*top;
	t_node	*second;
	int		temp;

	top = stack->top;
	temp = top->data;
	if (!stack->top->next || stack->size <= 1)
		return ;
	second = stack->top->next;
	top->data = second->data;
	second->data = temp;
}

void	sb(t_stack *stack)
{
	t_node	*top;
	t_node	*second;
	t_node	*temp;

	top = stack->top;
	temp = stack->top;
	second = stack->top->next;
	top->data = second->data;
	top->next = second->next;
	second->data = temp->data;
	second->next = temp->next;
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}

