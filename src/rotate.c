/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 16:58:35 by bpires-k          #+#    #+#             */
/*   Updated: 2026/07/03 21:12:07 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_dlist **a)
{
	t_dlist	*head;
	t_dlist	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	last = ft_llast(*a);
	head = (*a)->next;
	(*a)->next->prev = NULL;
	(*a)->prev = last;
	(*a)->next = NULL;
	last->next = *a;
	*a = head;	
	write(1, "ra\n", 3);
	return ;
}

void	rotate_b(t_dlist **b)
{
	t_dlist	*last;
	t_dlist	*head;

	if (!b || !*b || !(*b)->next)
		return ;
	last = ft_llast(*b);
	head = (*b)->next;
	(*b)->next->prev = NULL;
	(*b)->prev = last;
	(*b)->next = NULL;
	last->next = *b;
	*b = head;
	write(1, "rb\n", 3);
	return ;
}

void	rotate_r(t_dlist **a, t_dlist **b)
{
	t_dlist	*last;
	t_dlist	*head;

	if (a || *a || (*a)->next) 
	{
		last = ft_llast(*a);
		head = (*a)->next;
		(*a)->next->prev = NULL;
		(*a)->prev = last;
		(*a)->next = NULL;
		last->next = *a;
		*a = head;
	}
	if ( b || *b || (*b)->next)
	{
		last = ft_llast(*b);
		head = (*b)->next;
		(*b)->next->prev = NULL;
		(*b)->prev = last;
		(*b)->next = NULL;
		last->next = *b;
		*b = head;
	}
	write(1, "rr\n", 3);
	return ;
}
