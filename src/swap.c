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

	if (!a || !*a || !(*a)->next)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->prev = *a;
	temp->next = (*a)->next;
	(*a)->prev = NULL;
	(*a)->next = temp;
	write(1, "sa\n", 3);
	return ;
}

void	swap_b(t_dlist **b)
{
	t_dlist	*temp;

	if (!b || !*b || !(*b)->next)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->prev = *b;
	temp->next = (*b)->next;
	(*b)->prev = NULL;
	(*b)->next = temp;
	write(1, "sb\n", 3);
	return ;
}

void	swap_s(t_dlist **a, t_dlist **b)
{
	t_dlist	*temp;

	if (a && *a && (*a)->next)
	{
		temp = *a;
		*a = (*a)->next;
		temp->prev = *a;
		temp->next = (*a)->next;
		(*a)->prev = NULL;
		(*a)->next = temp;
	}
	if (b && *b && (*b)->next)
	{
		temp = *b;
		*b = (*b)->next;
		temp->prev = *b;
		temp->next = (*b)->next;
		(*b)->prev = NULL;
		(*b)->next = temp;
	}
	write(1, "ss\n", 3);
	return ;
}
