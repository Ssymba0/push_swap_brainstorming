/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:13:34 by isabri            #+#    #+#             */
/*   Updated: 2022/05/20 03:36:52 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	s(t_stack *a)
{
	int	tmp;

	if (a->size > 1)
	{
		tmp = a->s[a->top];
		a->s[a->top] = a->s[a->top - 1];
		a->s[a->top - 1] = tmp;
	}	
}

void	sa(t_stack *a)
{
	s(a);
}

void	sb(t_stack *b)
{
	s(b);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
