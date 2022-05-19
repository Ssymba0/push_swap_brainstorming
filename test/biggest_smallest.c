/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_smallest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:10:38 by isabri            #+#    #+#             */
/*   Updated: 2022/05/19 18:14:16 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	biggest_value(t_stack *b)
{
	int	i;
	int	index;
	int	tmp;

	i = 0;
	tmp = b->s[b->top];
	index = 0;
	while (i <= b->top)
	{
		if (b->s[i] > tmp)
		{
			tmp = b->s[i];
			index = i;
		}
		i++;
	}
	i = index;
	if (index >= (b->top + 1) / 2)
		while (tmp != b->s[b->top])
			rb(b);
	else
		while (tmp != b->s[b->top])
			rrb(b);
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

void	max_case(t_stack *a, t_stack *b, int i, t_info *info)
{
	while (info->v && b->s[i] < a->s[0])
	{
		rra(a);
		info->v--;
	}
	pa(a, b);
}
