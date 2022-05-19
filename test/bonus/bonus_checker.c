/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:39:52 by isabri            #+#    #+#             */
/*   Updated: 2022/05/19 21:00:34 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../get_next_line/get_next_line.h"
#include "ft_split.h"

int	main(int ac, char **av)
{
	t_stack		a;
	t_stack		b;
	char		**arr;
	char		mvs[10][10];
	int			i;
	int			j;

	i = 0;
	j = 0;
	mvs[][] = {
		"sa",
		"sb",
		"ss",
		"pa",
		"pb",
		"ra",
		"rb",
		"rr",
		"rra",
		"rrb",
		"rrr"
	};
	init_stack(&a, ac);
	init_stack(&b, ac);
	store_elem(&a, ac, av);
	arr = ft_split(get_next_line(0), '\n');
	while (arr[i])
	{
		while ()
	}
	if (is_sorted(a.s, a.top))
		printf("OK\n");
	else
		printf("KO\n");
}
