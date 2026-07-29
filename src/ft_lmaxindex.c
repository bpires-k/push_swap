/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lmaxindex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 17:54:59 by bpires-k          #+#    #+#             */
/*   Updated: 2026/07/13 18:25:41 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_dlist	*ft_lmaxindex(t_dlist *node)
{
	t_dlist *max;

	if (!node)
		return (NULL);
	max = node;
	while (node -> next)
	{
		if (max -> index > node -> index)
			max = node;
		node = node -> next;
	}
	return (max);
}
