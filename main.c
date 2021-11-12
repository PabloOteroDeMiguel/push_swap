/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:59:47 by potero            #+#    #+#             */
/*   Updated: 2021/11/12 13:50:23 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<stdio.h>

int main(int argc, char **argv)
{	
	char	**str;
	int		i;
	int		a;
	long int		num;
	t_column	**column_a = NULL;

	a = 1;
	i = 0;
	column_a = malloc(sizeof(t_list));
	*column_a = 0;
	while (a < argc)
	{
		str = ft_split(argv[a], ' ');	
		while (str[i])
		{	
			if (ps_check_arg(str[i]) == 1)
			{
				num = ps_atoi(str[i]);
				printf("num: %li\n", num);
				ft_printf("fnum: %i\n", num);
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
	if (ps_repeat(*column_a) == 1)
		ps_error(1);
	else
		ps_print_column(*column_a);
}	
