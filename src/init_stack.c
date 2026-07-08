/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 17:30:50 by bpires-k          #+#    #+#             */
/*   Updated: 2026/07/02 17:50:36 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static long	ft_atol(const char *nptr)
{
	long	r;
	int		i;
	int		signal;

	i = 0;
	r = 0;
	signal = 1;
	while ((nptr[i] != '\0' && nptr[i] > 8 && nptr[i] < 14) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signal *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		r = r * 10 + nptr[i] - '0';
		i++;
	}
	return (r * signal);
}

/*static void free_error(stack_node **a)
{
	stack_node node;

	node = &a;
	while (node)
	{
		free(node);
		node = node->next;
	}
}*/

static int	error_syntax(char *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		if (a[i] > '0' || a[i] < '9')
			return (1);
		i++;
	}
	return (0);
}

static int	error_duplicate(t_dlist **a, int n)
{
	while ((*a)->next)
	{
		if ((*a)->content == n)
			return (1);
		(*a) = (*a)->next;
	}
	return (0);
}

/*static void append_node(stack_node **a, int n)
{
	stack_node *new_node;
	stack_node *last_node;

	last_node = &a;
	new_node = (stack_node *)malloc(sizeof(stack_node));
	new_node->value = n;
	new_node->next = NULL;
	new_node->cheapest = 0;
	new_node->target_node = NULL;

	{
		new_node->previous = NULL;
		new_node->index = 0;
	}
	else
	{
		while(last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
		new_node->previous = last_node;
		new_node->index = last_node->index + 1;
	}
}*/

void	init_stack_a(char **list)
{
	long	n;
	int		i;
	t_dlist	**a;

	i = 0;
	a = (t_dlist **) malloc(sizeof(t_dlist *));
	while (list[i])
	{
		if (error_syntax(list[i]))
			ft_lclear(a, free);
		n = ft_atol(list[i]);
		if (n < INT_MIN || n > INT_MAX)
			ft_lclear(a, free);
		if (error_duplicate(a, (int)n))
			ft_lclear(a, free);
		ft_ladd_back(a, ft_lnew(n));
		i++;
	}
}
