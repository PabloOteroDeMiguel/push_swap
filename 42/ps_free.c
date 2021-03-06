/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:25:33 by potero            #+#    #+#             */
/*   Updated: 2021/11/29 11:38:40 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_free(t_column **column)
{
	t_column	*aux;

	aux = *column;
	while (*column)
	{
		aux = (*column)->next;
		free(*column);
		*column = aux;
	}
	free(*column);
}
