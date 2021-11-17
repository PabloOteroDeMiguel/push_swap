/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 09:37:28 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/17 11:07:54 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<stdio.h>

int	ps_order(t_column **column)
{
	t_column	*aux;
	t_column	*aux2;

	aux = *column;
	aux2 = (*column)->next;
	while (aux->next != 0)
	{
		printf("%li >> %li\n", aux->num, (aux->next)->num);
		printf("%li >> %li\n", aux->num, aux2->num);
		if (aux->num > (aux->next)->num)
			return (0);
		aux = aux->next;
	}
	return (1);
}
