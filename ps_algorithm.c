/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:06:12 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/23 16:50:46 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_parts(t_column *column_a, t_column *column_b, int numbers)
{
//	int	numbers;
	int 	i;
	int		r;
//	t_column	*aux;

	i = 0;
//	numbers = ((ps_lstsize(column_a) - 5) / 5);
//	ft_printf("numb-> %i\n", numbers);
	ft_printf("1\n");
//	ps_position(column_a);
	ft_printf("2\n");
	ps_nmin(column_a, numbers);
	ft_printf("3\n");

/*	aux = column_a;
	while (aux)
	{
		if (aux->min == 1)
			ft_printf("The minimum is %i\n", aux->num);
		aux = aux->next;
	}
*/
	while (i < numbers)
	{
		ft_printf("4\n");
		r = ps_closer(column_a, numbers - i);
		ft_printf("4,5\n");
	//	ft_printf("r-> %i\n", r);
		if (r > 0)
		{
			while (r > 1)
			{
				ps_rotate(&column_a, 'a');
				r--;
			}
		}
		else if (r < 1)
		{
			while (r < 0)
			{
				ps_reverse_r(&column_a, 'a');
				r++;
			}
		}
		ps_push(&column_a, &column_b, 'b');
		i++;
	}
	ps_print_column(column_a, column_b);
}
