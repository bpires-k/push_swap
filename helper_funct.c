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

float	compute_disorder(t_list **a)
{
	int	mistakes;
	int	i;
	int	j;
	int	total_pairs;

	mistakes = 0;
	i = 0;
	total_pairs = 0;
	while (i < ft_lstsize(a) - 1)
	{
		j = i + 1;
		while (j < size - 1)
		{
			total_pairs += 1;
			if (a[i] > a[j])
				mistakes += 1;
		}
	}
	return (mistakes / total_pairs);
}
