/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:59:47 by potero            #+#    #+#             */
/*   Updated: 2021/11/10 13:43:32 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{	
	char	**str;
	int		i;
	int		a;
	char	*s= "hola";
	t_list	**colum_a = NULL;

	colum_a = malloc(sizeof(t_list));
	a = 1;
	i = 0;
	*colum_a = ft_lstnew(&s);
	ft_printf("%s\n", colum_a);
	while (a < argc)
	{
		str = ft_split(argv[a], ' ');
		{
/*			while(str[i])
			{
				ft_lstadd_back(colum_a, ft_atoi(str[i]));
				i++;
			}*/
		a++;
		i = 0;
		}
	}
/*	while (str[i])
	{
		ft_putstr_fd(str[i], 1);
		i++;
		write(1, "\n", 1);
	}*/

}	

