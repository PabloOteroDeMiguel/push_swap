/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm_insertion.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:05:53 by potero            #+#    #+#             */
/*   Updated: 2021/11/19 12:10:54 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_insertion_one(t_column *column_a, t_column *column_b)
{
	ps_push(&column_a, &column_b, 'b');
	ps_push(&column_a, &column_b, 'b');
	
	if (column_b->num < (column_b->next)->num)
		ps_swap(&column_b, 'b');
	ps_print_column(column_a, column_b);
}
