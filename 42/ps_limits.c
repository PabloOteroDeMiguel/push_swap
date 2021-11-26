/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_limits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 09:49:55 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/26 12:30:31 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_limit_min(t_column *column)
{
	t_column	*aux;
	long int	min;

	min = column->num;
	aux = column->next;
	while (aux)
	{
		if (aux->num < min)
			min = aux->num;
		aux = aux->next;
	}
	aux = column;
	while (aux)
	{
		if (aux->num == min)
			aux->min = 1;
		else
			aux->min = 0;
		aux = aux->next;
	}
}

void	ps_limit_max(t_column *column)
{
	t_column	*aux;
	long int	max;

	max = column->num;
	aux = column->next;
	while (aux)
	{
		if (aux->num > max)
			max = aux->num;
		aux = aux->next;
	}
	aux = column;
	while (aux)
	{
		if (aux->num == max)
			aux->max = 1;
		else
			aux->max = 0;
		aux = aux->next;
	}
}

void	ps_nmin_aux(t_column *column, long int min)
{
	t_column	*aux;

	aux = column;
	while (aux)
	{
		if (aux->num == min)
			aux->min = 1;
		aux = aux->next;
	}
}

void	ps_nmin(t_column *column, int n)
{
	t_column	*aux;
	long int	min;
	int			i;

	ps_limit_min(column);
	i = 0;
	while (i < n - 1)
	{
		aux = column;
		if (aux->min == 1)
		{
			while (aux->min == 1)
				aux = aux->next;
		}
		min = aux->num;
		aux = aux->next;
		while (aux)
		{
			if (aux->num < min && aux->min != 1)
				min = aux->num;
			aux = aux->next;
		}
		ps_nmin_aux(column, min);
		i++;
	}
}
