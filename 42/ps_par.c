/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_par.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:42:05 by potero            #+#    #+#             */
/*   Updated: 2021/11/29 12:06:11 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_par(t_column **column_a, t_column **column_b)
{
	t_column	*aux;

	ps_limit_min(*column_a);
	ps_limit_max(*column_a);
	aux = *column_b;
	if ((*column_a)->min == 1)
		ps_push(column_a, column_b, 'b');
	else if ((*column_a)->max == 1)
		ps_rotate(column_a, 'a');
	else if ((*column_a)->num > ((*column_a)->next)->num)
		ps_swap(column_a, 'a');
	else
		ps_rotate(column_a, 'a');
}
