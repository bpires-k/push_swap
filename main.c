/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 19:17:57 by bpires-k          #+#    #+#             */
/*   Updated: 2026/07/02 19:26:04 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	*list;

	if (argc < 2)
		return;
	else if (argc == 2)
		list = ft_split(agrv[1]);
	else
		list = argv[1:];
	init_stack_a()
}
