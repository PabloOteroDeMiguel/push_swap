/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_par.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:42:05 by potero            #+#    #+#             */
/*   Updated: 2021/11/20 12:33:31 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_par(t_column **column_a, t_column **column_b)
{
	ps_limits(*column_a);
	if (ps_order(*column_a) == 1)
		return ;
	else if (ps_order(*column_a) != 1)
	{
		if ((*column_a)->min == 1)
			ps_push(column_a, column_b, 'b');
		else if ((*column_a)->max == 1)
			ps_rotate(column_a, 'a');
//		ft_printf("num-> %i\n", (*column_a)->num);
//		ft_printf("aux-> %i\n", ((*column_a)->next)->num);
		else if((*column_a)->num > ((*column_a)->next)->num)
			ps_swap(column_a, 'a');
		ps_rotate(column_a, 'a');
	}
}
