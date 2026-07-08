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
	if (!b || (*b)->next == NULL)
		return ;
	else
	{
		ft_ladd_front(a, *b);
		ft_ldelone(*b, free);
		write(1, "pa\n", 3);
		return ;
	}
}

void	push_b(t_dlist **a, t_dlist **b)
{
	if (!a || (*a)->next == NULL)
		return ;
	else
	{
		if (!b)
			*b = ft_lnew((*a)->content);
		else
			ft_ladd_front(b, *a);
		ft_ldelone(*a, free);
		write(1, "pb\n", 3);
		return ;
	}
}
