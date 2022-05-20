/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:31:45 by isabri            #+#    #+#             */
/*   Updated: 2022/05/20 03:14:53 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_split.h"

int	ft_strcmp(const char	*s1, const char	*s2)
{
	while (((unsigned char)*s1 || (unsigned char)*s2))
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}
