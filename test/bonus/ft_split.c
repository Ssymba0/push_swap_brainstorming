/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:17:18 by isabri            #+#    #+#             */
/*   Updated: 2022/05/19 19:34:56 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_split.h"

static int	wordcount(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !(s[i + 1])))
			words++;
		i++;
	}
	return (words);
}

static char	*ft_strndup(char const *s, int n)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)malloc((n + 1) * sizeof(char));
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

static int	ft_size(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		len;
	int		end;
	char	**p;

	i = -1;
	end = 0;
	if (!s)
		return (NULL);
	p = (char **)malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (++i < wordcount(s, c))
	{
		while (s[end] == c && s[end])
			end++;
		start = end;
		while (s[end] != c && s[end])
			end++;
		len = ft_size(s + start, c);
		p[i] = ft_strndup(s + start, len);
	}
	p[i] = 0;
	return (p);
}

// #include <stdio.h>
// int	main()
// {
// 	char	c = 'z';
// 	char	*str = NULL;
// 	char	**p = ft_split(str, c);
// //printf("%d", wordcount(str, c));
// 	for (int i = 0; p[i]; i++)
// 		printf("'%s'\n", p[i]);
// 	printf("%s", p[0]);
// }