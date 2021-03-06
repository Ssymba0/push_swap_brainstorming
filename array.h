#include <stdlib.h>

typedef struct	s_stack
{
	unsigned int	max_size;
	int				top_index;
	int				**data;
}				t_stack;

t_stack	*stack_init(unsigned int max_size);
int		stack_push(t_stack *stack, int data);
int		stack_size(t_stack *stack);
void	*stack_peek(t_stack *stack);
void	*stack_pop(t_stack *stack);
void	stack_clear(t_stack *stack, void (*free_data)(void *));
void	free_stack(t_stack *stack, void (*free_data)(void *));