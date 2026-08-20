/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_funct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:46:59 by bpires-k          #+#    #+#             */
/*   Updated: 2026/08/08 23:04:53 by bkolmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_dlist *ft_lmaxindex(t_dlist *node)
{
	t_dlist	*max;

	if (!node)
		return (NULL);
	max = node;
	node = node->next;
	while (node)
	{
		if (max->index < node->index)
			max = node;
		node = node->next;
	}
	return (max);
}

t_dlist	*ft_lminindex(t_dlist *node)
{
	t_dlist	*min;

	if (!node)
		return (NULL);
	min = node;
	node = node->next;
	while (node)
	{
		if (min->index > node->index)
			min = node;
		node = node->next;
	}
	return (min);
}

float	compute_disorder(t_dlist *a)
{
	int	mistakes;
	int	total_pairs;

	mistakes = 0;
	total_pairs = 0;
	while (a && a->next)
	{
		if (a->content > (a->next)->content)
			mistakes++;
		total_pairs++;
		a = a->next;
	}
	if (total_pairs == 0)
		return (0.0);
	return ((float)mistakes / total_pairs);
}

void	init_index(t_dlist **a)
{
	t_dlist	*current;
	t_dlist	*stack_dupe;
	int		count;

	current = *a;
	while (current != NULL)
	{
		count = 1;
		stack_dupe = *a;
		while (stack_dupe != NULL)
		{
			if (current->content > stack_dupe->content)
				count++;
			stack_dupe = stack_dupe->next;
		}
		current->index = count;
		current = current->next;
	}
}
