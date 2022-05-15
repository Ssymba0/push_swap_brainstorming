#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef struct s_stack
{
	int	*s;
	int	size;
	int	top;
}	t_stack;

void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	rrb(t_stack *b);
void	rra(t_stack *a);
void	rr(t_stack *a, t_stack *b);
void	rb(t_stack *b);
void	ra(t_stack *a);
void	rrr(t_stack *a, t_stack *b);
void	sa(t_stack *a);

#endif