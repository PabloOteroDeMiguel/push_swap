/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:31:47 by potero            #+#    #+#             */
/*   Updated: 2021/11/11 12:57:41 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_column	*ps_lstnew(int	num)
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
	int	i;
	int	j;

	if(!lst)
		return (0);
	i = ps_lstsize(lst);
	j = 0;
	while (j < i -1)
	{
		lst = lst->next;
		j++;
	}
	return (lst);
}

void	ps_lst_add_back(t_column **column, t_column *new)
{
	t_column	*aux;

	if (!*column)
	{
		*column = new;
		return	;
	}
	aux = *column;
	aux = ps_lstlast(aux);
	aux->next = new;
}

