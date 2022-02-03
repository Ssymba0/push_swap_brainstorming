typedef struct	s_node
{
	int				data;
	struct s_node	*next;
}				t_node;

typedef struct	s_stack
{
	unsigned int	size;
	t_node			*top;
}				t_stack;

t_stack	*stack_init(void);
t_node	*create_elem(int data);
int		stack_push(t_stack *stack, int data);
int		stack_size(t_stack *stack);
t_node	*stack_peek(t_stack *stack);
t_node	*stack_pop(t_stack *stack);
void	stack_clear(t_stack *stack, void (*free_data)(int));
void	free_stack(t_stack *stack, void (*free_data)(int));
void	delem(t_node *node);