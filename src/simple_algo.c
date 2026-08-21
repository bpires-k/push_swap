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

	if (!a || !*a || !(*a)->next)
		return (a);
	max = ft_lmaxindex(*a)->index;
	if ((*a)->index == max)
		rotate_a(a);
	else if ((*a)->next->index == max && ft_lsize(*a) > 2)
		reverse_rotate_a(a);
	if ((*a)->index > (*a)->next->index && ft_lsize (*a) > 2)
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
	int	target;
	int	size;

	size = ft_lsize(*a);
	target = 1;
	if (!a || !b)
		return (NULL);
	while (target <= size - 3)
	{
		move_min_to_top(a);
		push_b(a, b);
		target++;
		printf("%i, %i\n", target, size);
	}
	a = small_sort(a);
	while (*b)
		push_a(a, b);	
	return (a);
}
