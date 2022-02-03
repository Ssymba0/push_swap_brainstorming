#include "push_swap.h"
void	reset(int data)
{
	data = 0;
}

int main(void)
{
    t_stack *stack_a;
    t_stack *stack_b;
	int		size;
	int		var;
	int		var1;
	int		var2;
	int		var3;

	var = 1;
	var1 = 2;
	var2 = 3;
	var3 = 4;
	stack_a = stack_init();
	stack_b = stack_init();
	size = stack_size(stack_a);
	stack_push(stack_a, var);
	// stack_push(stack_a, var1);
	// stack_push(stack_a, var2);
	// stack_push(stack_a, var3);
	sa(stack_a);
	printf("init size = %d and current size = %d\n", size, stack_a->size);
	printf("%d\n", stack_pop(stack_a)->data ? stack_pop(stack_a)->data : 0);
	printf("init size = %d and current size = %d\n", size, stack_a->size);
	printf("%d\n", stack_pop(stack_a)->data ? stack_pop(stack_a)->data : 0);
	printf("init size = %d and current size = %d\n", size, stack_a->size);
	printf("%d\n", stack_pop(stack_a)->data ? stack_pop(stack_a)->data : 0);
	//stack_clear(stack_a, reset);
	//printf("init size = %d and current size = %d\n", size, stack_a->size);
}