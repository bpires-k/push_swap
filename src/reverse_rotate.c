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
	t_dlist	*head;
	t_dlist	*last;

	if (!a || !*a || !(*a)->next)
		return;
	head = ft_llast(*a);
	last = head->prev;
	last->next = NULL;
	head->prev = NULL;
	head->next = (*a);
	*a = head;	
	write(1, "rra\n", 4);
	return ;
}

void	reverse_rotate_b(t_dlist **b)
{
	t_dlist	*head;
	t_dlist	*last;

	if (!b || !*b || !(*b)->next)
		return;
	head = ft_llast(*b);
	last = head->prev;
	last->next = NULL;
	head->prev = NULL;
	head->next = (*b);
	*b = head;
	write(1, "rrb\n", 4);
	return ;
}

void	reverse_rotate_r(t_dlist **a, t_dlist **b)
{
	t_dlist	*head;
	t_dlist	*last;

	if (a && !*a && !(*a)->next)
	{
		head = ft_llast(*a);
		last = head->prev;
		last->next = NULL;
		head->prev = NULL;
		head->next = (*a);
		(*a) = head;
	}
	if (b && !*b && !(*b)->next)
	{
		head = ft_llast(*b);
		last = head->prev;
		last->next = NULL;
		head->prev = NULL;
		head->next = (*b);
		(*b) = head;
	}
	write(1, "rrr\n", 4);
	return ;
}
