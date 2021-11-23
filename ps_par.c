/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_par.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:42:05 by potero            #+#    #+#             */
/*   Updated: 2021/11/23 11:41:55 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_par(t_column **column_a, t_column **column_b)
{
	t_column	*aux;
	ps_limits(*column_a);

	aux = *column_b;
/*	while (aux)
    {
		if (aux->max == 1)
			ft_printf("The maximum is %i\n", aux->num);
		else if (aux->min == 1)
			ft_printf("The minimum is %i\n", aux->num);
		aux = aux->next;
	}
*/
/*	if (ps_order(*column_a) == 1)
		return ;*/

/*	if (ps_order(*column_a) != 1)
	{*/
//	if ((*column_a)->min == 1)
//		ps_push(column_a, column_b, 'b');
	if ((*column_a)->max == 1)
		ps_rotate(column_a, 'a');	
//	else if ((*column_a)->min == 1)
//		ps_push(column_a, column_b, 'b');
//		ft_printf("num-> %i\n", (*column_a)->num);
//		ft_printf("aux-> %i\n", ((*column_a)->next)->num);
	else if((*column_a)->num > ((*column_a)->next)->num)
		ps_swap(column_a, 'a');
	else
		ps_rotate(column_a, 'a');
}
