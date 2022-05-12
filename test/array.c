#include "push_swap.h"

int check_dups(int *a, int elm, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (a[i] == elm)
			return (0);
		i++;
	}
	return (1);
}

int	*stack_create(int size)
{
	int	*arr;

	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (0);
	return (arr);
}

int	*store_elem(int *a, int ac, char **av)
{
	int	i;
	int elm;

	if (!a)
		a = stack_create(ac - 1);
	i = 0;
	while (i < ac - 1)
	{
		elm = ft_atoi(av[i + 1]);
		if (check_dups(a, elm, i))
			a[i] = elm;
		else{
			free(a);
			printf("Error: duplicate was found\n");
			exit(1);
		}
		i++;
	}
	return (a);
}