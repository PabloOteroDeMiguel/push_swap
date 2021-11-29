/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:59:29 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/29 11:36:19 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_rotate(t_column **column, char c)
{
	t_column	*aux;

	aux = *column;
	*column = (*column)->next;
	ps_lst_add_back(column, ps_lstnew(aux->num));
	free(aux);
	if (c == 'a' || c == 'b')
		ft_printf("r%c\n", c);
}

void	ps_rr(t_column **column_1, t_column **column_2)
{
	ps_rotate(&*column_1, 'r');
	ps_rotate(&*column_2, 'r');
	ft_printf("rr\n");
}

void	ps_reverse_r(t_column **column, char c)
{
	t_column	*aux;
	t_column	*aux2;

	if (ps_lstsize(*column) > 2)
	{
		aux = ps_lstlast(*column);
		aux2 = *column;
		while (aux2->next && aux2->next->next)
			aux2 = aux2->next;
		aux2->next = 0;
		ps_add_front(column, aux);
	}
	else if (ps_lstsize(*column) == 2)
		ps_swap(&*column, 'r');
	if (c == 'a' || c == 'b')
		ft_printf("rr%c\n", c);
}

void	ps_rrr(t_column **column_1, t_column **column_2)
{
	ps_reverse_r(&*column_1, 'r');
	ps_reverse_r(&*column_2, 'r');
	ft_printf("rrr\n");
}
