/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 16:40:41 by bpires-k          #+#    #+#             */
/*   Updated: 2026/07/03 18:35:37 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_dlist **a)
{
	t_dlist	*temp;

	if (!a)
		return ;
	temp = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	(*a)-> next = temp;
	temp->prev = (*a);
	write(1, "sa\n", 3);
	return ;
}

void	swap_b(t_dlist **b)
{
	t_dlist	*temp;

	if (!b)
		return ;
	temp = *b;
	*b = (*b)->next;
	(*b)->prev = NULL;
	(*b)-> next = temp;
	temp->prev = (*b);
	write(1, "sb\n", 3);
	return ;
}

void	swap_s(t_dlist **a, t_dlist **b)
{
	t_dlist	*temp;

	if (!a || !b)
		return ;
	temp = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	(*a)-> next = temp;
	temp->prev = (*a);
	temp = *b;
	*b = (*b)->next;
	(*b)->prev = NULL;
	(*b)-> next = temp;
	temp->prev = (*b);
	write(1, "ss\n", 3);
	return ;
}
