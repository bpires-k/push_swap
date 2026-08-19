/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 22:53:01 by bpires-k          #+#    #+#             */
/*   Updated: 2026/05/19 22:53:02 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ldelone(t_dlist *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(lst->next)->prev = NULL;
	del(lst);
	free(lst);
}
