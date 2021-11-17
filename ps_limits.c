/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_limits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 09:49:55 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/17 10:22:46 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_limits(t_column *column)
{
	t_column	*aux;
	long int	max;
	long int	min;

	max = column->num;
	min = column->num;
	aux = column->next;
	while (aux)
	{
		if (aux->num > max)
			max = aux->num;
		else if (aux->num < min)
			min = aux->num;
		aux = aux->next;
	}
	aux = column;
	while (aux)
	{
		if (aux->num == max)
			aux->max = 1;
		else if (aux->num == min)
			aux->min = 1;
		else
		{
			aux->min = 0;
			aux->max = 0;
		}
		aux = aux->next;
	}
}
