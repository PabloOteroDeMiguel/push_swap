/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:09:46 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/26 12:57:17 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_step_one(t_column **column_a, t_column **column_b)
{
	int	div;
	int	numbers;
	int	block;

	div = ((ps_lstsize(*column_a) / 50) + 3);
	numbers = ((ps_lstsize(*column_a) - 5) / div);
	block = 0;
	while (block < div)
	{
		if (ps_order(*column_a) != 1)
			ps_parts(column_a, column_b, numbers);
		block++;
	}
}

int	main(int argc, char **argv)
{
	t_column	*column_a;
	t_column	*column_b;

//	column_a = malloc(sizeof(t_column));
//	column_b = malloc(sizeof(t_column));
	column_a = 0;
	column_b = 0;
	if (ps_create_c(&column_a, argc, argv) == 0 || ps_repeat(column_a) == 1)
	{
		ps_error(1);
		return (0);
	}
	if (ps_lstsize(column_a) > 5)
		ps_step_one(&column_a, &column_b);
	while (ps_order(column_a) != 1)
		ps_par(&column_a, &column_b);
	while (column_b)
		ps_parts_two(&column_a, &column_b);
	ps_free(&column_a);
	ps_free(&column_b);
	system("leaks push_swap");
}
