/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:17:43 by isabri            #+#    #+#             */
/*   Updated: 2022/05/20 03:36:41 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rvr(t_stack *a)
{
	int	tmp;
	int	i;

	tmp = a->s[0];
	i = 0;
	while (i < a->top)
	{
		a->s[i] = a->s[i + 1];
		i++;
	}
	a->s[a->top] = tmp;
}

void	rra(t_stack *a)
{
	rvr(a);
}

void	rrb(t_stack *b)
{
	rvr(b);
}

void	rrr(t_stack *a, t_stack *b)
{
	rvr(a);
	rvr(b);
}
