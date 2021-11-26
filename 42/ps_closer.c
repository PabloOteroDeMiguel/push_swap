/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_closer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:00:01 by potero            #+#    #+#             */
/*   Updated: 2021/11/26 12:43:22 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_closer_aux(t_column *aux, int n)
{
	int	i;

	i = 1;
	while (i < n - 1)
	{
		if (aux->min == 1)
			i++;
		aux = aux->next;
	}
	while (aux->min != 1)
		aux = aux->next;
	return (aux->pos);
}

int	ps_abs(int num)
{
	if (num < 0)
		num = num * -1;
	return (num);
}

int	ps_closer(t_column *column, int n)
{
	t_column	*aux;
	int			pos1;
	int			posn;

	ps_position(column);
	aux = column;
	while (aux->min != 1)
		aux = aux->next;
	pos1 = aux->pos;
	aux = aux->next;
	if (n > 1)
	{
		posn = ps_closer_aux(aux, n);
		if (posn > (ps_lstsize(column) / 2) + 1)
			posn = -(ps_lstsize(column) - posn) - 1;
		if ((ps_abs(posn)) < (ps_abs(pos1 - 1)))
		{
			return (posn);
		}
	}
	if (pos1 > (ps_lstsize(column) / 2) + 1)
		pos1 = -(ps_lstsize(column) - pos1) - 1;
	return (pos1);
}
