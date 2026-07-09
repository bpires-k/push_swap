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

static int	find_min(t_dlist **lst)
{
	int	min;

	min = INT_MIN;
	while ((*lst)->next != NULL)
	{
		if (min > (*lst)->content)
			min = (*lst)->content;
		else
			(*lst) = (*lst)->next;
	}
	return (min);
}

t_dlist	**simple_sort(t_dlist **a)
{
	t_dlist	**b;

	b = NULL;
	if (!a)
		return (NULL);
	while (ft_lsize(*a) > 1)
	{
		while ((*a)->content != find_min(a))
			rotate_a(a);
		push_b(a, b);
	}
	while (b)
		push_a(a, b);
	return (a);
}
