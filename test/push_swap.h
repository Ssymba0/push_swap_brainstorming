#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_stack
{
	int	*arr;
	int	size;
	int	max_size;
	int	i;
}	t_stack;

int	ft_atoi(char *s);
int	*stack_create(int size);
int	*store_elem(int *a, int ac, char **av);
int	ft_isdigit(char *s);
void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);
void pa(t_stack *a, t_stack *b);
void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);
void rra(t_stack *a);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);

#endif
