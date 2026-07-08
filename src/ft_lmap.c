/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 22:53:32 by bpires-k          #+#    #+#             */
/*   Updated: 2026/05/19 22:53:34 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_dlist	*ft_lmap(t_dlist *lst, void *(f)(void *), void (*del)(void *))
{
	t_dlist	*new_lst;
	t_dlist	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lnew(f(lst->content));
		if (!new_node)
			return (ft_lclear(&new_lst, del), NULL);
		ft_ladd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
