/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:14:28 by isabri            #+#    #+#             */
/*   Updated: 2022/05/20 03:36:33 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	if (a->top >= 0 && b->top < b->size)
	{
		b->top++;
		b->s[b->top] = a->s[a->top];
		if (a->top >= 0)
			a->top--;
	}
}

void	pa(t_stack *a, t_stack *b)
{
	if (b->top >= 0 && a->top < a->size)
	{
		a->top++;
		a->s[a->top] = b->s[b->top];
		if (b->top >= 0)
			b->top--;
	}
}
