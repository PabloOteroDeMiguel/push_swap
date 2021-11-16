/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_second.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:38:58 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/16 10:28:54 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
void	ps_del_one(t_column *column, void (*del)(void*))
{
	if (column)
	{
		del(column->num);
		free(column);
	}
}*/

void	ps_add_front(t_column **column, t_column *new)
{
	if (new)
	{
		new->next = *column;
		*column = new;
	}
}
