/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:34:38 by isabri            #+#    #+#             */
/*   Updated: 2022/05/20 03:14:29 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPLIT_H
# define FT_SPLIT_H
# include <stdlib.h>

static int	wordcount(char const *s, char c);
static char	*ft_strndup(char const *s, int n);
static int	ft_size(char const *s, char c);
char		**ft_split(char const *s, char c);
int			ft_strcmp(const char	*s1, const char	*s2);

#endif