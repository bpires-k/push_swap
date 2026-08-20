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

	if (!a || !*a || !(*a)->next)
		return;
	node = (*a)->next;
	ft_ladd_back(a, *a);
	node->prev = NULL;	
	write(1, "rra\n", 4);
	return ;
}

void	reverse_rotate_b(t_dlist **b)
{
	t_dlist	*node;

	if (!b || !*b || !(*b)->next)
		return;
	node = (*b)->next; 
	ft_ladd_back(b, (*b));
	node->prev = NULL;
	write(1, "rrb\n", 4);
	return ;
}

void	reverse_rotate_r(t_dlist **a, t_dlist **b)
{
	t_dlist	*node_a;
	t_dlist	*node_b;

	if (!a || !b || !*a || !*b || !(*a)->next || !(*b)->next)
		return;
	node_a = (*a)->next;
	node_b = (*b)->next;
	ft_ladd_back(a, (*a));
	node_a->prev = NULL;
	ft_ladd_back(b, (*b));
	node_b->prev = NULL;
	write(1, "rrr\n", 4);
	return ;
}
