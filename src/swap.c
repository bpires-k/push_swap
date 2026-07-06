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

#include "push_swap.h"

void	swap_a(l_list **a)
{
	l_list *temp;

	if (!a)
		return;
	temp = *a;
	*a = (*a)->next;
	(*a)-> next = temp;
	write(1, "sa\n", 3);
	return;
}

void	swap_b(l_list **b)
{
	l_list *temp;

	if (!b)
		return;
	temp = *b;
	*b = (*b)->next;
	(*b)-> next = temp;
	write(1, "sb\n", 3);
	return;
}

void	swap_s(l_list **a, l_list **b)
{
	l_list *temp;

	if (!a || !b)
		return;
	temp = *a;
	*a = (*a)->next;
	(*a)-> next = temp;
	temp = *b;
	*b = (*b)->next;
	(*b)-> next = temp;
	write(1, "ss\n", 3);
	return;
}
