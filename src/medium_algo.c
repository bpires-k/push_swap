/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:06:54 by bpires-k          #+#    #+#             */
/*   Updated: 2026/08/08 23:01:18 by bkolmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb)
	{
		i++;
	}
	return (i);
}

void	moves(t_dlist **b, int count, int r_count)
{
	if (count < r_count)
	{
		while (count > 0)
		{
	rotate_b(b);
			count -= 1;
		}
	}
	else
	{
	while (r_count > 0)
		{
			reverse_rotate_b(b);
			r_count -= 1;
		}
	}
}

void	select_sort(t_dlist **b, t_dlist *target)
{
	t_dlist	*head;
	t_dlist	*tail;
	int		count;
	int		r_count;

	count = 0;
	r_count = 1;
	head = (*b);
	tail = ft_llast(*b);
	while (head->index != target->index)
	{
		head = head->next;
		count += 1;
	}
	while (tail->index != target->index)
	{
		tail = tail->prev;
		r_count += 1;
	}
	moves(b, count, r_count);	
}

void	bucket_sort(t_dlist **a, t_dlist **b)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(ft_lsize(*a));

	if ((*a)->index <= i)
	{
		push_b(a, b);
		if (ft_lsize(*b) > 1)
			rotate_b(b);
		i++;
	}
	else if ((*a)->index <= range)	
	{
		push_b(a, b);
		i++;
	}
	else	
		rotate_a(a);
	if (i == range)
		range += range;
}

t_dlist	**medium_sort(t_dlist **a, t_dlist **b)
{
	if (!a || !b)
		return (NULL);
	while (*a)
	{
		bucket_sort(a, b);
	while (*b)
	{
		select_sort(b, ft_lminindex(*b));
		push_a(a, b);
	}
	return (a);
}
