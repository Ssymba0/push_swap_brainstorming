#include "push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	if (a->size > 1)
	{
		tmp = a->s[a->top];
		a->s[a->top] = a->s[a->top - 1];
		a->s[a->top - 1] = tmp;
	}
}

void	sb(t_stack *b)
{
	sa(b);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}

void	pb(t_stack *a, t_stack *b)
{
	if (a->top >= 0 && b->top < b->size)
	{
		b->top++;
		b->s[b->top] = a->s[a->top];
		if (a->top >= 0)
			a->top--;
	}
}

void	pa(t_stack *a, t_stack *b)
{
	if (b->top >= 0 && a->top < a->size)
	{
		a->top++;
		a->s[a->top] = b->s[b->top];
		if (b->top >= 0)
			b->top--;
	}
}

void	ra(t_stack *a)
{
	int	tmp;
	int	i;

	tmp = a->s[a->top];
	i = a->top;
	while (i > 0)
	{
		a->s[i] = a->s[i - 1];
		i--;
	}
	a->s[0] = tmp;
}

void	rb(t_stack *b)
{
	ra(b);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
}

void	rra(t_stack *a)
{
	int	tmp;
	int	i;

	tmp = a->s[0];
	i = 0;
	while (i < a->top)
	{
		a->s[i] = a->s[i + 1];
		i++;
	}
	a->s[a->top] = tmp;
}

void	rrb(t_stack *b)
{
	rra(b);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}