/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:29:06 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/18 12:23:36 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_push(t_column **column_1, t_column **column_2, char c)
{
	t_column	*aux;

	if (column_1)
	{
		aux = *column_1;
		*column_1 = (*column_1)->next;
		ps_add_front(&*column_2, aux);
		if (c == 'a' || c == 'b')
			ft_printf("p%c\n", c);
	}
}	
