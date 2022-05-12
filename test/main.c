#include "push_swap.h"

int	main(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		if (!ft_isdigit(av[i]))
		{
			printf("Error: only integers\n");
			return (1);
		}
	}
	t_stack	a;
	t_stack b;

	a.size = ac - 1;
	a.max_size = ac - 1;
	a.i = a.max_size - a.size;
	a.arr = store_elem(a.arr, ac, av);
	b.size = 0;
	b.max_size = ac - 1;
	b.i = b.max_size - b.size;
	b.arr = stack_create(b.max_size);
	pb(&a, &b);
	pb(&a, &b);
	for (int i = a.i; i < a.max_size; i++)
	{
		printf("%d\n", a.arr[i]);
	}
	printf("-----------------------------------------------------\n");
	for (int i = b.i; i <= b.max_size; i++)
	{
		printf("iteration %d\n", i);
		printf("%d\n", b.arr[i]);
	}
}