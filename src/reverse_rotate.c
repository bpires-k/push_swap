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

void	reverse_rotate_a(t_list **a)
{
	if (!a)
		return;
	ft_lstadd_back(a, (*a));
	ft_lstdelone((*a), free);
	write(1, "rra", 3);
	return;
}

void	reverse_rotate_b(t_list **b)
{
	if (!b)
		return;
	ft_lstadd_back(b, (*b));
	ft_lstdelone((*b), free);
	write(1, "rrb", 3);
	return;
}

void	reverse_rotate_r(t_list **a, t_list **b)
{
	if (!a || !b)
		return;
	ft_lstadd_back(a, (*a));
	ft_lstdelone((*a), free);
	ft_lstadd_back(b, (*b));
	ft_lstdelone((*b), free);
	write(1, "rrr", 3);
	return;
}

