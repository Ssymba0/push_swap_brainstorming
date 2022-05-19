/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:08:27 by isabri            #+#    #+#             */
/*   Updated: 2022/05/19 16:51:06 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	store_elem(t_stack *a, int ac, char **av)
{
	int	i;
	int	elm;

	i = ac - 1;
	a->top = 0;
	while (i > 0)
	{
		elm = ft_atoi(av[i]);
		if (ft_isdigit(av[i]) && check_dups(a->s, elm, a->top))
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

void	init_stack(t_stack *a, int ac)
{
	int	i;

	i = 0;
	a->size = ac - 1;
	a->s = (int *)malloc(sizeof(int) * a->size);
	while (i < a->size)
	{
		a->s[i] = 0;
		i++;
	}
	a->top = -1;
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	init_stack(&a, ac);
	init_stack(&b, ac);
	store_elem(&a, ac, av);
	if (a.size == 2)
		two_elm(&a);
	else if (a.size == 3)
		three_elm(&a);
	else if (a.size == 4)
		four_elm(&a, &b);
	else if (a.size == 5)
		five_elm(&a, &b);
	else
		big_sort(&a, &b);
	system("leaks push_swap");
}
