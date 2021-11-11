/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_repeat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:49:10 by potero            #+#    #+#             */
/*   Updated: 2021/11/11 17:19:06 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_repeat(t_column *column)
{
	t_column	*aux;
	t_column	*aux2;

	aux = column;
	while (aux)
	{
		aux2 = aux->next;
		while (aux2)
		{
			if (aux->num == aux2->num)
				return (1);
			aux2 = aux2->next;
		}
		aux = aux->next;
	}
	free(aux);
	return (0);
}	
