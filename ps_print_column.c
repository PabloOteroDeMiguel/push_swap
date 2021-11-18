/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_print_column.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:01:33 by potero            #+#    #+#             */
/*   Updated: 2021/11/18 11:11:54 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_print_column(t_column *column_a, t_column *column_b)
{
	t_column	*aux;
	t_column	*aux2;

	aux = column_a;
	aux2 = column_b;
	while (aux || aux2)
	{
		if (aux2)
		{
			ft_printf("%d            %d\n", aux->num, aux2->num);
			aux = aux->next;
			aux2 = aux2->next;
		}
		else
		{
			ft_printf("%d            .\n", aux->num);
			aux = aux->next;
		}
	}
	ft_printf("----------- -----------\na           b\n");
}
