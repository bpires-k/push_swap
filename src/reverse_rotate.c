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
	if (!a)
		return ;
	ft_ladd_back(a, (*a));
	ft_ldelone((*a), free);
	write(1, "rra\n", 4);
	return ;
}

void	reverse_rotate_b(t_dlist **b)
{
	if (!b)
		return ;
	ft_ladd_back(b, (*b));
	ft_ldelone((*b), free);
	write(1, "rrb\n", 4);
	return ;
}

void	reverse_rotate_r(t_dlist **a, t_dlist **b)
{
	if (!a || !b)
		return ;
	ft_ladd_back(a, (*a));
	ft_ldelone((*a), free);
	ft_ladd_back(b, (*b));
	ft_ldelone((*b), free);
	write(1, "rrr\n", 4);
	return ;
}
