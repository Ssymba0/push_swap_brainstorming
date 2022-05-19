/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:59:07 by isabri            #+#    #+#             */
/*   Updated: 2022/05/19 18:13:06 by isabri           ###   ########.fr       */
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
