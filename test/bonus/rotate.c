/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:15:49 by isabri            #+#    #+#             */
/*   Updated: 2022/05/20 03:36:47 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r(t_stack *a)
{
	int	tmp;
	int	i;

	tmp = a->s[a->top];
	i = a->top;
	while (i > 0)
	{
		a->s[i] = a->s[i - 1];
		i--;
	}
	a->s[0] = tmp;
}

void	ra(t_stack *a)
{
	r(a);
}

void	rb(t_stack *b)
{
	r(b);
}

void	rr(t_stack *a, t_stack *b)
{
	r(a);
	r(b);
}
