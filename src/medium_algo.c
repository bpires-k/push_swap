/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:06:54 by bpires-k          #+#    #+#             */
/*   Updated: 2026/07/05 17:06:59 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	moves(t_dlist **b, int count, int r_count)
{
	if (count < r_count)
	{
		while (count <= 0)
		{
			rotate_b(b);
			count -= 1;
		}
	}
	else
	{
		while (r_count <= 0)
		{
			reverse_rotate_b(b);
			r_count -= 1;
		}
	}
}

void	select_sort(t_dlist **b, t_dlist **a)
{
	t_dlist	*head;
	t_dlist	*tail;
	t_dlist	*pivot;
	int		count;
	int		r_count;

	count = 0;
	r_count = 0;
	head = (*b);
	tail = ft_llast(b);
	pivot = ft_lmax_index(b);
	while (head->index != pivot->index)
	{
		head = head->next;
		count += 1;
	}
	while (tail->index != pivot->index)
	{
		tail = tail->prev;
		r_count += 1;
	}
	moves(b, count, r_count);
	push_a(b);
}

void	bucket_sort(t_dlist **a, t_dlist **b)
{
	int	i;
	int	range;

	i = 0;
	range = (int)ft_sqrt(ft_lsize(*a));
	while (*a)
	{
		if ((*a)->index <= i)
		{
			push_b(a);
			if (ft_lsize(*b) > 1)
				rotate_b(b);
			i++;
		}
		else if ((*a)->index <= i + range)
		{
			push_b(a);
			i++;
		}
		else
			rotate_a(a);
	}
}

t_dlist	**medium_sort(t_dlist **a)
{
	t_dlist	**b;

	b = NULL;
	bucket_sort(a, b);
	while (*b)
		select_sort(b, a);
	return (a);
}
