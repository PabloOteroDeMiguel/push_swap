/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:06:12 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/25 13:01:05 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_parts(t_column **column_a, t_column **column_b, int numbers)
{
//	int	numbers;
	int 	i;
	int		r;
	t_column	*aux;

	i = 0;
//	numbers = ((ps_lstsize(column_a) - 5) / 5);
//	ft_printf("numb-> %i\n", numbers);
//	ps_position(column_a);
	ps_nmin(*column_a, numbers);

	aux = *column_a;
/*	while (aux)
	{
		if (aux->min == 1)
			ft_printf("A minimum is %i\n", aux->num);
		aux = aux->next;
	}
*/
	while (i < numbers)
	{
		r = ps_closer(*column_a, numbers - i);
//		ft_printf("r-> %i\n", r);
		if (r > 0)
		{
			while (r > 1)
			{
				ps_rotate(column_a, 'a');
				r--;
			}
		}
		else if (r < 1)
		{
			while (r < 0)
			{
				ps_reverse_r(column_a, 'a');
				r++;
			}
		}
		ps_push(column_a, column_b, 'b');
		i++;
	}
//	ps_print_column(*column_a, *column_b);
}

void	ps_parts_two(t_column **column_a, t_column **column_b)
{
	t_column	*aux;
	int			n;
	int			j;

	aux = *column_b;
	ps_limit_max(*column_b);
	ps_position(*column_b);
	n = ps_lstsize(*column_b);
	j = 0;
	while (aux->max != 1)
		aux = aux->next;
	if (aux->pos <= ((n / 2) + 1))
	{
		while (j < aux->pos - 1)
		{
			ps_rotate(column_b, 'b');
			j++;
		}
	}
	else if (aux->pos > ((n / 2) + 1))
	{
		while (j < (n - aux->pos + 1))
		{
			ps_reverse_r(column_b, 'b');
			j++;
		}
	}
	ps_push(column_b, column_a, 'a');
//	ps_print_column(*column_a, *column_b);
}
