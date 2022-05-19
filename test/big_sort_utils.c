/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:27:48 by isabri            #+#    #+#             */
/*   Updated: 2022/05/19 16:46:34 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*dup_arr(t_stack *a)
{
	int		*arr;
	int		i;

	i = 0;
	arr = (int *)malloc(sizeof(int) * (a->top + 1));
	while (i <= a->top)
	{
		arr[i] = a->s[i];
		i++;
	}
	bubblesort(arr, a->top + 1);
	return (arr);
}

int	get_expander(int size)
{
	if (size < 10)
		size /= 5;
	else if (size > 150)
		size /= 18;
	else if (size <= 150)
		size /= 8;
	return (size);
}

void	bubblesort(int *arr, int size)
{
	int	temp;
	int	n;
	int	i;

	n = 0;
	while (n < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
			i++;
		}
		n++;
	}
}

void	init_info(t_info *info, t_stack *a)
{
	info->mid = (a->top + 1) / 2;
	info->exp = get_expander(a->top + 1);
	info->max = info->mid + info->exp;
	info->min = info->mid - info->exp;
	info->first = 1;
}
