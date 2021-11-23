/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_closer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:00:01 by potero            #+#    #+#             */
/*   Updated: 2021/11/23 13:47:02 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_closer(t_column *column, int n)
{
	t_column	*aux;
	int			pos1;
	int			posn;
	int			i;

	ps_position(column);
	i = 1;
	aux = column;
	while (aux->min != 1)
		aux = aux->next;
	pos1 = aux->pos;
	aux = aux->next;
	while (i < n - 1)
	{
		if (aux->min == 1)
			i++;
		aux = aux->next;
	}
	while (aux->min != 1)
		aux = aux->next;
	posn = aux->pos;
	if ((ps_lstsize(column) - posn) < pos1 - 1)
		return (-(ps_lstsize(column) - posn));
	return (pos1);
}
