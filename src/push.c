/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 18:23:57 by bpires-k          #+#    #+#             */
/*   Updated: 2026/07/03 18:37:12 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_dlist **a, t_dlist **b)
{
	t_dlist	*node;

	node = *b;
	if (!node || node->next == NULL)
		return ;
	else
	{
		*b = node->next;
		ft_ladd_front(a, node);	
		write(1, "pa\n", 3);
		return ;
	}
}

void	push_b(t_dlist **a, t_dlist **b)
{
	t_dlist	*node;

	node = *a;
	if (!node || node->next == NULL)
		return ;
	else
	{
		*a = node->next;
		if (!b)
			*b = ft_lnew(node->content);
		else
			ft_ladd_front(b,node);
		write(1, "pb\n", 3);
		return ;
	}
}
