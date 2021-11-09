/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:59:47 by potero            #+#    #+#             */
/*   Updated: 2021/11/09 21:23:37 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "Error\n", 6);
	else
	{
		if (!ft_isdigit)
		{
			write(1, "Error\n", 6);
					
		if (ft_string(argv[1]))
			write(1, "ok\n", 3);
		else
			write(1, "Error\n", 6);
	}
}	
