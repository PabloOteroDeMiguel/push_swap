/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:06:12 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/27 14:09:26 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_parts(t_column **column_a, t_column **column_b, int numbers)
{
	int			i;
	int			r;
	t_column	*aux;

	i = 0;
	ps_nmin(*column_a, numbers);
	aux = *column_a;
	while (i < numbers)
	{
		r = ps_closer(*column_a, numbers - i);
		ps_move_a(column_a, r);
		ps_push(column_a, column_b, 'b');
		i++;
	}
}

void	ps_move_a(t_column **column_a, int r)
{
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
}

void	ps_parts_two(t_column **column_a, t_column **column_b)
{
	t_column	*aux;
	int			n;

	aux = *column_b;
	ps_limit_max(*column_b);
	ps_position(*column_b);
	n = ps_lstsize(*column_b);
	while (aux->max != 1)
		aux = aux->next;
	ps_move_b(column_b, aux, n);
	ps_push(column_b, column_a, 'a');
}

void	ps_move_b(t_column **column_b, t_column *aux, int n)
{
	int	j;

	j = 0;
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
}
