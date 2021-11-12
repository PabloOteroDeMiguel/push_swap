/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_print_column.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:01:33 by potero            #+#    #+#             */
/*   Updated: 2021/11/12 13:44:55 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_print_column(t_column *column)
{
	t_column	*aux;

	aux = column;
	while (aux)
	{
		ft_printf("%d\n", aux->num);
		aux = aux->next;
	}
	free(aux);
}
