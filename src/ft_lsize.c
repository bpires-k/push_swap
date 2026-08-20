/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 22:53:58 by bpires-k          #+#    #+#             */
/*   Updated: 2026/05/19 22:54:00 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lsize(t_dlist *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst -> next;
	}
	return (size);
}
