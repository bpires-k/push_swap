/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 16:11:26 by bpires-k          #+#    #+#             */
/*   Updated: 2026/07/03 21:14:53 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft/libft.h"

typedef struct ds_node
{
	int				content;
	int				index;
	struct ds_node	*next;
	struct ds_node	*prev;
}	l_list;

float	compute_disorder(l_list *a);
void	init_stack_a(char **list);
void	rotate_a(l_list **a);
void	rotate_b(l_list **b);
void	rotate_r(l_list **a, l_list **b);
void	push_a(l_list **b);
void	push_b(l_list **a);
void	swap_a(l_list **a);
void	swap_b(l_list **b);
void	swap_s(l_list **a, l_list **b);
void	reverse_rotate_a(l_list **a);
void	reverse_rotate_b(l_list **b);
void	reverse_rotate_r(l_list **a, l_list **b);
void	ft_ladd_back(l_list **lst, l_list *new);
void	ft_ladd_front(l_list **lst, l_list *new);
void	ft_lclear(l_list **lst, void (*del)(void *));
void	ft_ldelone(l_list *lst, void (*del)(void *));
void	ft_liter(_list *lst, void (*f)(void *));
l_list	*ft_llast(l_list *lst);
l_list	*ft_lmap(l_list *lst, void *(f)(void *), void (*del)(void *));
l_list	*ft_lnew(void *content);
int	ft_lsize(l_list *lst);

#endif
