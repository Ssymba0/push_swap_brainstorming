#include "push_swap.h"

int	ft_isdigit(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= '0' && s[i] <= '9') || \
		((s[i] == '-' || s[i] == '+') && s[i + 1]))
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(char *s)
{
	unsigned long long	res;
	int					sign;
	char				*p;

	p = (char *)s;
	sign = 1;
	res = 0;
	while (*p == '\n' || *p == '\t' || *p == '\v' || *p == '\f'
		|| *p == '\r' || *p == ' ')
		p++;
	if (*p == '-' || *p == '+')
	{
		if (*p == '-')
			sign = -1;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		res = res * 10 + *p - '0';
		p++;
	}
	return ((int)res * sign);
}

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

void	store_elem(t_stack *a, int ac, char **av)
{
	int	i;
	int	elm;

	i = ac - 1;
	while (i > 0)
	{
		elm = ft_atoi(av[i]);
		if (check_dups(a->s, elm, a->size) && ft_isdigit(av[i]))
		{
			a->s[a->top] = elm;
			a->top++;
			i--;
		}
		else
		{
			free(a->s);
			printf("Error\n");
			exit(0);
		}
	}
	a->top--;
}

void	two_elm(t_stack *a)
{
	if (a->size == 2 && a->s[0] < a->s[1])
		sa(a);
}

void	three_elm(t_stack *a)
{
	if (a->s[2] > a->s[1] && a->s[1] < a->s[0] && a->s[0] > a->s[2])
		sa(a);
	else if (a->s[2] > a->s[1] && a->s[1] > a->s[0])
	{
		sa(a);
		rra(a);
	}
	else if (a->s[2] > a->s[1] && a->s[1] < a->s[0] && a->s[0] < a->s[2])
		ra(a);
	else if (a->s[2] < a->s[1] && a->s[1] > a->s[0] && a->s[0] > a->s[2])
	{
		sa(a);
		ra(a);
	}
	else if (a->s[2] < a->s[1] && a->s[1] > a->s[0] && a->s[0] < a->s[2])
		rra(a);
}

void	smallest_value(t_stack *a)
{
	int	i;
	int index;
	int	tmp;

	i = 0;
	tmp = a->s[0];
	while (i <= a->top)
	{
		if (a->s[i] < tmp)
		{
			tmp = a->s[i];
			index = i;
		}
		i++;
	}
	i = 0;
	while (i <= a->top)
	{
		if (a->s[i] == tmp)
		{
			ra(a);
			break ;
		}
		i++;
	}
}
void	five_elm(t_stack *a, t_stack *b)
{

	three_elm(a);
	pa(a, b);
	if (a->s[a->top] > a->s[a->top - 1])
		ra(a);
	pa(a, b);
	if (a->s[a->top] > a->s[a->top - 1])
		ra(a);
}

int	main(int ac, char **av)
{
	t_stack a;
	t_stack b;

	a.size = ac - 1;
	a.s = (int *)malloc(sizeof(int) * a.size);
	b.size = ac - 1;
	b.s = (int *)malloc(sizeof(int) * b.size);
	a.top = 0;
	b.top = 0;
	b.size = ac - 1;
	store_elem(&a, ac, av);
	for (int i = a.top; i >= 0; i--)
		printf("a[%d]=%d\n", i, a.s[i]);
	printf("-------------------------------------\n");
	if (a.size == 2)
		two_elm(&a);
	else if (a.size == 3)
		three_elm(&a);
	else if (a.size == 5)
		five_elm(&a, &b);
	for (int i = a.top; i >= 0; i--)
		printf("a[%d]=%d\n", i, a.s[i]);
}