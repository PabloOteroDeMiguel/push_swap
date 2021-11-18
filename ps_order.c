/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 09:37:28 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/18 11:15:36 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<stdio.h>

int	ps_order(t_column *column)
{
	t_column	*aux;

	aux = column;
	while (aux->next != 0)
	{
		if (aux->num > (aux->next)->num)
			return (0);
		aux = aux->next;
	}
	return (1);
}
