/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 20:50:04 by bpires-k          #+#    #+#             */
/*   Updated: 2026/07/03 21:13:47 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_a(t_dlist **a)
{
	t_dlist	*node;

	node = (*a)->next;
	if (!a)
		return ;
	ft_ladd_back(a, *a);
	node->prev = NULL;	
	write(1, "rra\n", 4);
	return ;
}

void	reverse_rotate_b(t_dlist **b)
{
	t_dlist	*node;

	node = (*b)->next;
	if (!b)
		return ;
	ft_ladd_back(b, (*b));
	node->prev = NULL;
	write(1, "rrb\n", 4);
	return ;
}

void	reverse_rotate_r(t_dlist **a, t_dlist **b)
{
	t_dlist	*node_a;
	t_dlist	*node_b;

	node_a = (*a)->next;
	node_b = (*b)->next
	if (!a || !b)
		return ;
	ft_ladd_back(a, (*a));
	node_a->prev = NULL;
	ft_ladd_back(b, (*b));
	node_b->prev = NULL;
	write(1, "rrr\n", 4);
	return ;
}
