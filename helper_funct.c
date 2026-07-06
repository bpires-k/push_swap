/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_funct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:46:59 by bpires-k          #+#    #+#             */
/*   Updated: 2026/06/29 16:03:55 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	compute_disorder(l_list *a)
{
	int	mistakes;
	int	total_pairs;

	mistakes = 0;
	total_pairs = 0;
	while (a->next)
	{
		total_pairs += 1;
		if (a->content > (a->next)->content)
			mistakes += 1;
		a = a->next;
	}
	return (mistakes / total_pairs);
}

void	init_index(l_list **a)
{
	l_list	*current;
	l_list	*stack_dupe;
	int		count;

	current = *a;
	while (current != NULL)
	{
		count = 0;
		stack_dupe = *a;
		while (stack_dupe != NULL)
		{
			if (current->value > stack_dupe->value)
				count++;
			stack_dupe = stack_dupe->next;
		}
		current->index = count;
		current = current->next;
	}
}
