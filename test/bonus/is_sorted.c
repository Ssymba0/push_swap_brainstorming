/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:54:19 by isabri            #+#    #+#             */
/*   Updated: 2022/05/20 00:05:16 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../push_swap.h"

int	is_sorted(int *arr, int size)
{
	if (size == 1 || size == 0)
		return (1);
	if (arr[size - 1] > arr[size - 2])
		return (0);
	return (is_sorted(arr, size - 1));
}
