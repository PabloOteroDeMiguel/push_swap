/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:00:01 by potero            #+#    #+#             */
/*   Updated: 2021/11/18 17:02:23 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_step_one(t_column *column_a, t_column *column_b)
{
	t_column	*aux;
	t_column	*aux2;
	int			numbers;
	int			i;

	i = 0;
	numbers = ps_lstsize(column_a);
//	ft_printf("numbers-> %i\n", numbers);
	if (numbers > 2)
	{
		aux = column_a;
		aux2 = column_b;
		ps_position(column_a);
		ps_limits(column_a);
//	ft_printf("numeros-->%i\n", numbers);
//	ft_printf("pos %i\n", column_a->pos);
		while (aux->min != 1)
			aux = aux->next;
//	ft_printf("pos %i\n", aux->pos);
		if (aux->pos <= (numbers / 2))
		{
			while (i <  aux->pos - 1)
			{
				ps_rotate(&column_a, 'a');
				i++;
			}
			ps_push(&column_a, &column_b, 'b');
		}
		else if (aux->pos > (numbers / 2))
		{
			while (i < (numbers - aux->pos + 1))
			{
				ps_reverse_r(&column_a, 'a');
				i++;
			}
			ps_push(&column_a, &column_b, 'b');
		}
		ps_step_one(column_a, column_b);	
	}
	else
	{
		ps_step_two(column_a);
		ps_step_three(column_a, column_b);
	//	ps_print_column(column_a, column_b);
	}
}


void	ps_step_two(t_column *column)
{
	t_column	*aux;
	t_column	*aux2;
	long int	n;
	
	aux = column;
	aux2 = column->next;
	n = aux->num;
	if (aux->num > aux2->num)
	{
		column->num = aux2->num;
		(column->next)->num = n;
		ft_printf("sa\n");
	}
}

void	ps_step_three(t_column *column_a, t_column *column_b)
{
	int	i;
	int	j;

	i = ps_lstsize(column_b);
//	ft_printf("i-> %i\n", i);
	j = 0;
	while ( j < i)
	{
		ps_push(&column_b, &column_a, 'a');
		j++;
	}
}	
