/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_closer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:00:01 by potero            #+#    #+#             */
/*   Updated: 2021/11/24 13:49:21 by potero-d         ###   ########.fr       */
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
//	ft_printf("n-> %i\n", n);
//	if (pos1 > (ps_lstsize(column) / 2) + 1)
//		pos1 = -(ps_lstsize(column) - pos1) - 1;
	aux = aux->next;
	if (n > 1)
	{
		while (i < n - 1)
		{
			if (aux->min == 1)
				i++;
			aux = aux->next;
		}
		while (aux->min != 1)
			aux = aux->next;
		posn = aux->pos;
		if (posn > (ps_lstsize(column) / 2) + 1)
			posn = -(ps_lstsize(column) - posn)  - 1;
	//	ft_printf("pos1-> %i\n", pos1);
	//	ft_printf("posn-> %i\n", posn);
	//	ft_printf("ABSn-> %i\n", ABS(posn));
	//	ft_printf("ABS1-> %i\n", ABS(pos1));
	
		if ((ABS(posn)) < (ABS(pos1 - 1)))
		{
			return (posn);
		}
	}
	if (pos1 > (ps_lstsize(column) / 2) + 1)
		pos1 = -(ps_lstsize(column) - pos1) - 1;
	return (pos1);
}
