#include "push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	if (!a || !a->arr || a->size < 2)
		return ;
	tmp = a->arr[0];
	a->arr[0] = a->arr[1];
	a->arr[1] = tmp;
}

void	sb(t_stack *b)
{
	sa(b);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sa(b);
}

void	pb(t_stack *a, t_stack *b)
{
	if (!a || !a->arr || !a->size)
		return ;
	b->arr[b->i] = a->arr[a->i];
	b->size++;
	b->i--;
	a->size--;
	a->i++;
}

void	pa(t_stack *a, t_stack *b)
{
	if (!b || !b->arr || !b->size)
		return ;
	if (!a || !a->arr || !a->size)
		return ;
	a->arr[b->i] = b->arr[a->i];
	b->size--;
	b->i++;
	a->size++;
	a->i--;
}

void	ra(t_stack *a)
{
	int	tmp;
	int	i;

	if (!a || !a->arr || a->size < 2)
		return ;
	tmp = a->arr[0];
	i = 1;
	while (i < a->size)
	{
		a->arr[i - 1] = a->arr[i];
		i++;
	}
	a->arr[i] = tmp;
}

void	rb(t_stack *b)
{
	ra(b);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	ra(b);
}

void	rra(t_stack *a)
{
	int	tmp;
	int	i;

	if (!a || !a->arr || a->size < 2)
		return ;
	tmp = a->arr[a->size - 1];
	i = a->size - 1;
	while (i > 0)
	{
		a->arr[i] = a->arr[i - 1];
		i--;
	}
	a->arr[0] = tmp;
}

void	rrb(t_stack *b)
{
	rra(b);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rra(b);
}