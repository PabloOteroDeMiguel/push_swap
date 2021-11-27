/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_create_column.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:24:35 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/27 14:23:25 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<stdio.h>

int	ps_create_c(t_column **column, int	argc, char **argv)
{
	char		**str;
	int			a;
	int			i;
	t_column	*aux;

	a = 1;
	i = 0;
	while (a < argc)
	{
		str = ft_split(argv[a], ' ');
		while (str[i])
		{
			if (ps_check_arg(str[i]) == 1)
			{
				aux = ps_lstnew(ps_atoi(str[i]));
				printf("aux-> %p\n", aux);
				ps_lst_add_back(column, aux);
			}
			else
				return (0);
			free(str[i]);
			i++;
		}
		free(str);
		a++;
		i = 0;
	}
	return (1);
}
