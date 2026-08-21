/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 14:50:13 by bpires-k          #+#    #+#             */
/*   Updated: 2026/07/05 14:50:22 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_dlist	**small_sort(t_dlist **a)
{
	int	max;

	if (!a || !*a)
		return (NULL);
	max = ft_lmaxindex(*a)->index;
	if ((*a)->index == max)
		rotate_a(a);
	else if ((*a)->next->index == max)
		reverse_rotate_a(a);
	if ((*a)->index > (*a)->next->index)
		swap_a(a);
	return (a);
}

void	move_min_to_top(t_dlist **lst)
{
	t_dlist	*head;
	t_dlist	*tail;
	t_dlist	*pivot;
	int		count;
	int		r_count;

	count = 0;
	r_count = 1;
	head = (*lst);
	tail = ft_llast(*lst);
	pivot = ft_lminindex(*lst);
	while (head->index != pivot->index)
	{
		head = head->next;
		count++;
	}
	while (tail->index != pivot->index)
	{
		tail = tail->prev;
		r_count++;
	}
	moves(lst, count, r_count);
}

t_dlist	**simple_sort(t_dlist **a, t_dlist **b)
{
	if (!a || !b)
		return (NULL);
	if (ft_lsize(*a) < 4)
		return (small_sort(a));
	while (ft_lsize(*a) > 1)
	{
		select_sort(a, ft_lmaxindex(*a));
		push_b(a, b);
	}
	while (*b)
		push_a(a, b);	
	return (a);
}
