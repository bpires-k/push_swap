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
	if (!a)
		return ;
	ft_ladd_front(a, ft_llast(*a));
	ft_llast(*a)->next = NULL;	
	write(1, "ra\n", 3);
	return ;
}

void	rotate_b(t_dlist **b)
{
	if (!b)
		return ;
	ft_ladd_front(b, ft_llast(*b));
	ft_llast(*b)->next = NULL;	
	write(1, "rb\n", 3);
	return ;
}

void	rotate_r(t_dlist **a, t_dlist **b)
{
	if (!a || !b)
		return ;
	ft_ladd_front(a, ft_llast(*a));
	ft_llast(*a)->next = NULL;	
	ft_ladd_front(b, ft_llast(*b));
	ft_llast(*b)->next = NULL;
	write(1, "rr\n", 3);
	return ;
}
