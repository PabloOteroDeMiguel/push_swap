/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_closer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:00:01 by potero            #+#    #+#             */
/*   Updated: 2021/11/23 16:50:47 by potero-d         ###   ########.fr       */
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
	ft_printf("5\n");
	i = 1;
	aux = column;
	while (aux->min != 1)
		aux = aux->next;
	pos1 = aux->pos;
	ft_printf("6\n");
	ft_printf("n-> %i\n", n);
	if (pos1 > (ps_lstsize(column) / 2) + 1)
		pos1 = -(ps_lstsize(column) - pos1) - 1;
	aux = aux->next;
	ft_printf("7\n");
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
	/*	ft_printf("pos1-> %i\n", pos1);
		ft_printf("posn-> %i\n", posn);
		ft_printf("ABSn-> %i\n", ABS(posn));
		ft_printf("ABS1-> %i\n", ABS(pos1));
	*/
		if ((ABS(posn)) < (ABS(pos1 - 1)))
		{
			return (posn);
		}
	}
	return (pos1);
}
