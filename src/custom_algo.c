/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilh <emda-sil@student.42school.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 10:13:36 by guilh             #+#    #+#             */
/*   Updated: 2026/07/30 10:26:25 by guilh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_dlist	**adaptive_sort(t_dlist **a, t_dlist **b, float disorder)
{
	if (disorder < 0.2)
		return (simple_sort(a, b));
	else /*(cd_a >= 0.2 && cd_a < 0.5)*/
		return (medium_sort(a, b));
	/*else
		return (complex_sort(a));*/
}
