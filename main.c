/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:59:47 by potero            #+#    #+#             */
/*   Updated: 2021/11/11 16:05:23 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{	
	char	**str;
	int		i;
	int		a;
	int		num;
	t_column	**column_a = NULL;
//	t_column	*aux;

	a = 1;
	i = 0;
	column_a = malloc(sizeof(t_list));
	while (a < argc)
	{
		str = ft_split(argv[a], ' ');	
		while (str[i])
		{	
			if (ps_check_arg(str[i]) == 1)
			{
				num = ft_atoi(str[i]);
				ps_lst_add_back(column_a, ps_lstnew(num));
			}
			else
			{
				ps_error(1);
				return (0);
			}
			i++;
		}
		a++;
		i = 0;
	}
	ps_print_column(*column_a);
/*	aux = *column_a;
	while (aux)
	{
		ft_printf("%d\n", aux->num);
		aux = aux->next;
	}*/
}	
