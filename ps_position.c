/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_position.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:05:01 by potero            #+#    #+#             */
/*   Updated: 2021/11/17 17:31:52 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_position(t_column *column)
{
	t_column	*aux;
	int			p;

	aux = column;
	p = 1;
	while (aux)
	{
		aux->pos = p;
		aux = aux->next;
		p++;
	}
}	
