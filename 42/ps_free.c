/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:25:33 by potero            #+#    #+#             */
/*   Updated: 2021/11/27 14:21:19 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<stdio.h>

void	ps_free(t_column **column)
{
	t_column	*aux;

	aux = *column;
	while (*column)
	{
//		free(*column);
		aux = (*column)->next;
		printf("auxD1-> %p\n", aux);
		free(*column);
		printf("auxD2-> %p\n", aux);
		*column = aux;
	}
	free(*column);
}
