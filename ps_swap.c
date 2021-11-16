/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:15:15 by potero            #+#    #+#             */
/*   Updated: 2021/11/16 11:55:38 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_swap(t_column **column, char	c)
{
	t_column	*aux;
	t_column	*aux2;

	if (ps_lstsize(*column) > 1)
	{
		aux = *column;
		*column = (*column)->next;
		aux2 = *column;
		*column = (*column)->next;
		ps_add_front(&*column, aux);
		ps_add_front(&*column, aux2);
	}
	if (c == 'a' || c == 'b')
		ft_printf("s%c\n", c);
}

void	ps_ss(t_column **column_a, t_column **column_b)
{
	ps_swap(&*column_a, 's');
	ps_swap(&*column_b, 's');
	ft_printf("ss\n");
}
