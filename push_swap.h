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
	int				value;
	int				index;
	int				cheapest;
	struct ds_node	*target_node;
	struct ds_node	*next;
	struct ds_node	*previous;
}	stack_node;

float	compute_disorder(t_list *a);
void	init_stack_a(char **list);
void	rotate_a(t_list **a);
void	rotate_b(t_list **b);
void	rotate_r(t_list **a, t_list **b);
void	push_a(t_list **b);
void	push_b(t_list **a);
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_s(t_list **a, t_list **b);
void	reverse_rotate_a(t_list **a);
void	reverse_rotate_a(t_list **b);
void	reverse_rotate_r(t_list **a, t_list **b);

#endif
