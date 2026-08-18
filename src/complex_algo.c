/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42school.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 22:05:28 by bkolmer           #+#    #+#             */
/*   Updated: 2026/08/08 23:07:58 by bkolmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_dlist **count_sort(t_dlist **a, exp)
{
	
}

t_dlist	**complex_sort(t_dlist **a)
{
	t_dlist	*max;
	int		exp;

	max = ft_lmaxindex(*a);
	exp = 1;
	while (max->content / exp > 0)
	{
		count_sort(a, exp);
	}
	return (a);
}
