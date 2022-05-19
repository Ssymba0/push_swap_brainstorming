/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:03:37 by isabri            #+#    #+#             */
/*   Updated: 2022/05/19 16:51:46 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_sort(t_stack *a, t_stack *b)
{
	int		*arr;
	int		size;
	t_info	info;

	arr = dup_arr(a);
	size = a->top + 1;
	init_info(&info, a);
	while (a->top >= 0)
	{
		push_b(a, b, &info, arr);
		info.first = 0;
		info.max += info.exp;
		if (info.max > size - 1)
			info.max = size - 1;
		info.min -= info.exp;
		if (info.min < 0)
			info.min = 0;
	}
	free(arr);
	push_a(a, b, &info);
}

void	push_b(t_stack *a, t_stack *b, t_info *info, int *arr)
{
	int	i;

	i = info->max - info->min + 1;
	while (b->top + 1 != i)
	{
		if (a->s[a->top] >= arr[info->min] && a->s[a->top] <= arr[info->max])
		{
			pb(a, b);
			if (b->s[b->top] < arr[info->mid])
			{
				if (a->s[a->top] >= arr[info->min] && \
				a->s[a->top] <= arr[info->max])
					rb(b);
				else
					rr(a, b);
			}
		}
		else
			ra(a);
	}
}

int	get_index_max(t_stack *a)
{
	int	i;
	int	max;
	int	index;

	i = 0;
	max = a->s[0];
	index = 0;
	while (i <= a->top)
	{
		if (a->s[i] > max)
		{
			max = a->s[i];
			index = i;
		}
		i++;
	}
	return (index);
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

void	is_v(t_stack *a, t_stack *b, int i, t_info *info)
{
	int	j;

	if (b->s[i] == b->s[b->top])
	{
		max_case(a, b, i, info);
	}
	else
	{
		if (b->s[b->top] > a->s[0])
		{
			pa(a, b);
			ra(a);
			info->v++;
		}
		else
		{
			if (i > (b->top + 1) / 2)
				rb(b);
			else
				rrb(b);
		}
	}
}

void	push_a(t_stack *a, t_stack *b, t_info *info)
{
	int	i;

	while (b->top >= 0)
	{
		i = get_index_max(b);
		if (info->v == 0)
		{
			pa(a, b);
			if (b->s[i] != a->s[a->top])
			{
				ra(a);
				info->v++;
			}
		}
		else
		{
			is_v(a, b, i, info);
		}
	}
	while (info->v)
	{
		rra(a);
		info->v--;
	}
}

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
