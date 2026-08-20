/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:34:02 by bpires-k          #+#    #+#             */
/*   Updated: 2026/05/19 17:34:03 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ladd_back(t_dlist **lst, t_dlist *new)
{
	t_dlist	*last;

	if (!lst || !new)
		return ;
	last = ft_llast(*lst);
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last->next = new;
	new->prev = last;
	new->next = NULL;
}
