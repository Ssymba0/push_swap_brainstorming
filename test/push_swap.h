/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabri <isabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:03:30 by isabri            #+#    #+#             */
/*   Updated: 2022/05/19 19:18:26 by isabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

typedef struct s_info
{
	int	mid;
	int	min;
	int	max;
	int	exp;
	int	first;
	int	v;
}	t_info;

typedef struct s_stack
{
	int	*s;
	int	size;
	int	top;
}	t_stack;

void	sb(t_stack *b);
void	s(t_stack *a);
void	ss(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	rrb(t_stack *b);
void	rra(t_stack *a);
void	r(t_stack *a);
void	rr(t_stack *a, t_stack *b);
void	rb(t_stack *b);
void	ra(t_stack *a);
void	rrr(t_stack *a, t_stack *b);
void	sa(t_stack *a);
int		*dup_arr(t_stack *a);
int		get_expander(int size);
void	bubblesort(int *arr, int size);
void	init_info(t_info *info, t_stack *a);
void	sort_first(t_stack *a, t_stack *b);
void	big_sort(t_stack *a, t_stack *b);
void	push_b(t_stack *a, t_stack *b, t_info *info, int *arr);
void	push_a(t_stack *a, t_stack *b, t_info *info);
int		ft_isdigit(char *s);
void	biggest_value(t_stack *b);
int		ft_atoi(char *s);
int		check_dups(int *a, int elm, int size);
void	five_elm(t_stack *a, t_stack *b);
void	four_elm(t_stack *a, t_stack *b);
void	smallest_value(t_stack *a);
void	three_elm(t_stack *a);
void	two_elm(t_stack *a);
void	biggest_value(t_stack *b);
void	smallest_value(t_stack *a);
void	max_case(t_stack *a, t_stack *b, int i, t_info *info);
void	init_stack(t_stack *a, int ac);
void	store_elem(t_stack *a, int ac, char **av);
int		is_sorted(int *arr, int size);

#endif