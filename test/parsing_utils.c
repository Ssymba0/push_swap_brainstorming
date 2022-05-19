/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:56:21 by isabri            #+#    #+#             */
/*   Updated: 2022/05/19 15:56:27 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= '0' && s[i] <= '9') || \
		((s[i] == '-' || s[i] == '+') && i == 0))
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(char *s)
{
	unsigned long long	res;
	int					sign;
	char				*p;

	p = (char *)s;
	sign = 1;
	res = 0;
	while (*p == '\n' || *p == '\t' || *p == '\v' || *p == '\f'
		|| *p == '\r' || *p == ' ')
		p++;
	if (*p == '-' || *p == '+')
	{
		if (*p == '-')
			sign = -1;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		res = res * 10 + *p - '0';
		p++;
	}
	return ((int)res * sign);
}

int	check_dups(int *a, int elm, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (a[i] == elm)
		{
			printf("duplicate\n");
			return (0);
		}
		i++;
	}
	return (1);
}