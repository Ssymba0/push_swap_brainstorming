/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:39:52 by isabri            #+#    #+#             */
/*   Updated: 2022/05/20 03:13:47 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../get_next_line/get_next_line.h"
#include "ft_split.h"

void	check_instructions(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (!ft_strcmp(arr[i], "sa") || !ft_strcmp(arr[i], "sb") || \
		!ft_strcmp(arr[i], "ss") || !ft_strcmp(arr[i], "pa") || \
		!ft_strcmp(arr[i], "pb") || !ft_strcmp(arr[i], "ra") || \
		!ft_strcmp(arr[i], "rb") || !ft_strcmp(arr[i], "rr") || \
		!ft_strcmp(arr[i], "rra") || !ft_strcmp(arr[i], "rrb") || \
		!ft_strcmp(arr[i], "rrr"))
			i++;
		else
		{
			write(2, "Error\n", 6);
			exit(0);
		}
	}
}

void	swap_push(char **arr, t_stack *a, t_stack *b)
{
	if (!ft_strcmp(*arr, "sa"))
		sa(a);
	else if (!ft_strcmp(*arr, "sb"))
		sb(b);
	else if (!ft_strcmp(*arr, "ss"))
		ss(a, b);
	else if (!ft_strcmp(*arr, "pa"))
		pa(a, b);
	else if (!ft_strcmp(*arr, "pb"))
		pb(a, b);
}

void	rotation(char **arr, t_stack *a, t_stack *b)
{
	if (!ft_strcmp(*arr, "ra"))
		ra(a);
	else if (!ft_strcmp(*arr, "rb"))
		rb(b);
	else if (!ft_strcmp(*arr, "rr"))
		rr(a, b);
	else if (!ft_strcmp(*arr, "rra"))
		rra(a);
	else if (!ft_strcmp(*arr, "rrb"))
		rrb(b);
	else if (!ft_strcmp(*arr, "rrr"))
		rrr(a, b);
}

void	execute_instructions(char **arr, t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (!ft_strcmp(arr[i], "sa") || !ft_strcmp(arr[i], "sb") || \
		!ft_strcmp(arr[i], "ss") || !ft_strcmp(arr[i], "pa") || \
		!ft_strcmp(arr[i], "pb"))
			swap_push((arr + i), a, b);
		else if (!ft_strcmp(arr[i], "ra") ||!ft_strcmp(arr[i], "rb") || \
		!ft_strcmp(arr[i], "rr") || !ft_strcmp(arr[i], "rra") || \
		!ft_strcmp(arr[i], "rrb") || !ft_strcmp(arr[i], "rrr"))
			rotation((arr + i), a, b);
		i++;
	}
}

int	main(int ac, char **av)
{
	t_stack		a;
	t_stack		b;
	char		**arr;
	int			i;

	i = 0;
	init_stack(&a, ac);
	init_stack(&b, ac);
	store_elem(&a, ac, av);
	arr = ft_split(get_next_line(0), '\n');
	check_instructions(arr);
	execute_instructions(arr, &a, &b);
	if (is_sorted(a.s, a.top))
		printf("OK\n");
	else
		printf("KO\n");
}
