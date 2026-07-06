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

void	rotate_a(t_list **a)
{
	if (!a)
		return;
	ft_lstadd_front(a, ft_lstlast(*a));
	ft_lstdelone(ft_lstlast(*a), free);
	write(1, "ra", 2);
	return;
}

void	rotate_b(t_list **b)
{
	if (!b)
		return;
	ft_lstadd_front(b, ft_lstlast(*b));
	ft_lstdelone(ft_lstlast(*b), free);
	write(1, "rb", 2);
	return;
}

void	rotate_r(t_list **a, t_list **b)
{
	if (!a || !b)
		return;
	rotate_a(a);
	rotate_b(b);
	write(1, "rr", 2);
	return;
}
