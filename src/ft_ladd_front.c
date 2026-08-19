/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 22:52:26 by bpires-k          #+#    #+#             */
/*   Updated: 2026/05/19 22:52:29 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ladd_front(t_dlist **lst, t_dlist *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	(*lst)->prev = new;
	*lst = new;
}
