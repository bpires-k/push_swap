/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 14:50:13 by bpires-k          #+#    #+#             */
/*   Updated: 2026/07/05 14:50:22 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static int	find_max(t_list **lst)
{
	int	MAX;

	MAX = 0;
	while ((*lst) -> next != NULL)
	{
		if (MAX < (*lst) -> content)
			MAX = (*lst) -> content;
		else
			(*lst) = (*lst) -> next;
	}
	return (MAX);
}

t_list	**simple_sort(t_list **a)
{
	t_list **b;

	if (!a)
		return (NULL);
	while (ft_lstsize(a) > 1)
	{
		while ((*a) -> content != MAX)
			rotate_a(a);
		push_b(a, b);
	}
	while (b)
		push_a(a, b);
	return (a);
}
