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
}	t_dlist;

float	compute_disorder(t_dlist *a);
void	init_stack_a(char **list);
void	rotate_a(t_dlist **a);
void	rotate_b(t_dlist **b);
void	rotate_r(t_dlist **a, t_dlist **b);
void	push_a(t_dlist **b);
void	push_b(t_dlist **a);
void	swap_a(t_dlist **a);
void	swap_b(t_dlist **b);
void	swap_s(t_dlist **a, t_dlist **b);
void	reverse_rotate_a(t_dlist **a);
void	reverse_rotate_b(t_dlist **b);
void	reverse_rotate_r(t_dlist **a, t_dlist **b);
void	ft_ladd_back(t_dlist **lst, t_dlist *new);
void	ft_ladd_front(t_dlist **lst, t_dlist *new);
void	ft_lclear(t_dlist **lst, void (*del)(void *));
void	ft_ldelone(t_dlist *lst, void (*del)(void *));
void	ft_liter(t_dlist *lst, void (*f)(void *));
t_dlist	*ft_llast(t_dlist *lst);
t_dlist	*ft_lmap(t_dlist *lst, void *(f)(void *), void (*del)(void *));
t_dlist	*ft_lnew(int content);
int		ft_lsize(t_dlist *lst);
void	init_index(t_dlist **a);

#endif
