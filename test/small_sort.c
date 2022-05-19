/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:59:07 by isabri            #+#    #+#             */
/*   Updated: 2022/05/19 15:59:14 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	int	index;
	int	tmp;

	i = 0;
	tmp = a->s[a->top];
	index = 0;
	while (i <= a->top)
	{
		if (a->s[i] < tmp)
		{
			tmp = a->s[i];
			index = i;
		}
		i++;
	}
	i = index;
	if (index >= a->size / 2)
		while (tmp != a->s[a->top])
			ra(a);
	else
		while (tmp != a->s[a->top])
			rra(a);
}

void	four_elm(t_stack *a, t_stack *b)
{
	smallest_value(a);
	pb(a, b);
	three_elm(a);
	if (a->s[a->top] > a->s[a->top - 1])
		ra(a);
	pa(a, b);
}

void	five_elm(t_stack *a, t_stack *b)
{
	smallest_value(a);
	pb(a, b);
	smallest_value(a);
	pb(a, b);
	three_elm(a);
	pa(a, b);
	if (a->s[a->top] > a->s[a->top - 1])
		ra(a);
	pa(a, b);
	if (a->s[a->top] > a->s[a->top - 1])
		ra(a);
}
