/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_create_column.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:24:35 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/29 11:38:49 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_create_c(t_column **column, int	argc, char **argv)
{
	char		**str;
	int			a;
	int			i;

	a = 1;
	i = 0;
	while (a < argc)
	{
		str = ft_split(argv[a], ' ');
		while (str[i])
		{
			if (ps_check_arg(str[i]) == 1)
				ps_lst_add_back(column, ps_lstnew(ps_atoi(str[i])));
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
