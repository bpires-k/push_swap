/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 16:58:35 by bpires-k          #+#    #+#             */
/*   Updated: 2026/07/03 18:34:54 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**rotate_a(t_list **a)
{
	if (!a)
		return (NULL);
	ft_lstadd_front(a, ft_lstlast(*a));
	ft_lstdelone(ft_lstlast(*a), free);
	return (a);
}

t_list	**rotate_b(t_list **b)
{
	if (!b)
		return (NULL);
	ft_lstadd_front(b, ft_lstlast(*a));
	ft_lstdelone(ft_lstlast(*a), free);
	return (b);
}

t_list	**rotate_r(t_list **a, t_list **b)
{
	if (!a || !b)
		return (NULL);
	a = rotate_a(a);
	b = rotate_b(b);
	return(a, b);
}
