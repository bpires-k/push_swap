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

void	push_a(t_list **a, t_list **b)
{
	if (!b || (*b) -> next == NULL)
		return;
	else
	{
		ft_lstadd_front(a, *b);
		ft_lstdelone(*b, free);
		write(1, "pa", 2);
		return;
	}
}

void	push_b(t_list **a, t_list **b)
{
	if (!a || (*a) -> next == NULL)
		return;
	else
	{
		if (!b)
			*b = ft_lstnew((*a)->content);
		else
			ft_lstadd_front(b, *a);
		ft_lstdelone(*a, free);
		write(1, "pb", 2);
		return;
	}
}
