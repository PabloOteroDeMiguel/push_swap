/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:31:47 by potero            #+#    #+#             */
/*   Updated: 2021/11/12 13:45:51 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_column	*ps_lstnew(long int	num)
{
	t_column	*element;
	
	element = malloc(sizeof(t_column));
	if (!element)
		return (NULL);
	element->num = num;
	element->next = NULL;
	return (element);
}

int	ps_lstsize(t_column *column)
{
	int			i;
	t_column	*aux;

	i = 0;
	if (!column)
		return (0);
	aux = column;
	while (aux)
	{
		i++;
		aux = aux->next;
	}
	return (i);
}

t_column	*ps_lstlast(t_column *lst)
{
	int	j;
	t_column	*aux;

	aux = lst;
	if(!lst)
		return (0);
	j = 0;
	while (aux->next != 0)
	{
		aux = aux->next;
		j++;
	}
	return (aux);
}

void	ps_lst_add_back(t_column **column, t_column *new)
{
	t_column	*aux;

	if (!*column)
	{
		*column = new;
		return	;
	}
	aux = ps_lstlast(*column);
	aux->next = new;
}

