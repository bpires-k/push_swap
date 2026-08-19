/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 19:17:57 by bpires-k          #+#    #+#             */
/*   Updated: 2026/07/03 18:34:50 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_stack(t_dlist **a, char *flag, float disorder)
{
	if (!a || !flag || !disorder)
		return ;
	if (ft_strncmp(flag, "--simple", 8) == 0)
		a = simple_sort(a);
	else if (ft_strncmp(flag, "--medium", 8) == 0)
		a = medium_sort(a);
	/*else if (ft_strncmp(flag, "--complex", 9) == 0)
		a = complex_sort(a);*/
	else if (ft_strncmp(flag, "--adaptive", 10) == 0)
		a = adaptive_sort(a);
	return ;
}

int	main(int argc, char **argv)
{	
	char	*flag;
	int		i;
	t_dlist	**a;

	i = 0;
	if (argc < 2)
		return (0);
	if (ft_strncmp(argv[1], "--", 2) == 0)
		flag = argv[i++];
	else
		flag = "--adaptive";
	a = init_stack_a(argv + i + 1);
	sort_stack(a, flag, compute_disorder(*a));
}
