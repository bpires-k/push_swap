/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 16:11:26 by bpires-k          #+#    #+#             */
/*   Updated: 2026/08/08 23:05:45 by bkolmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include <limits.h>

typedef struct ds_node {
  int content;
  int index;
  struct ds_node *next;
  struct ds_node *prev;
} t_dlist;

float compute_disorder(t_dlist *a);
t_dlist **init_stack_a(char **list);
void rotate_a(t_dlist **a);
void rotate_b(t_dlist **b);
void rotate_r(t_dlist **a, t_dlist **b);
void push_a(t_dlist **a, t_dlist **b);
void push_b(t_dlist **a, t_dlist **b);
void swap_a(t_dlist **a);
void swap_b(t_dlist **b);
void swap_s(t_dlist **a, t_dlist **b);
void reverse_rotate_a(t_dlist **a);
void reverse_rotate_b(t_dlist **b);
void reverse_rotate_r(t_dlist **a, t_dlist **b);
void ft_ladd_back(t_dlist **lst, t_dlist *new);
void ft_ladd_front(t_dlist **lst, t_dlist *new);
void ft_lclear(t_dlist **lst, void (*del)(void *));
void ft_ldelone(t_dlist *lst, void (*del)(void *));
void ft_liter(t_dlist *lst, void (*f)(void *));
t_dlist *ft_llast(t_dlist *lst);
t_dlist *ft_lmap(t_dlist *lst, void *(f)(void *), void (*del)(void *));
t_dlist *ft_lnew(int content);
int ft_lsize(t_dlist *lst);
void init_index(t_dlist **a);
t_dlist **simple_sort(t_dlist **a, t_dlist **b);
t_dlist **medium_sort(t_dlist **a, t_dlist **b);
t_dlist **complex_sort(t_dlist **a, t_dlist **b);
t_dlist **adaptive_sort(t_dlist **a, t_dlist **b, float disorder);
t_dlist *ft_lminindex(t_dlist *node);
t_dlist *ft_lmaxindex(t_dlist *node);
void	moves(t_dlist **b, int count, int r_count);
void	select_sort(t_dlist **b);
void	bucket_sort(t_dlist **a, t_dlist **b);
t_dlist	**small_sort(t_dlist **a);
#endif
