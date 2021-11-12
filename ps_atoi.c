/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:48:23 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/12 13:43:18 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
static long long int	ps_num(unsigned long long n, int c)
{
	if (n > 2147483647)
		return (2147483648);
	return (n * c);
}*/
#include "push_swap.h"
#include<stdio.h>

long int	ps_atoi(const char *str)
{
	int					i;
	long int	n;
	long int	c;

	i = 0;
	while ((str[i] == ' ') || ((str[i] > 8) && (str[i] < 14 )))
		i++;
	c = 1;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			c = - 1;
		i++;
	}
	n = 0;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
/*	if (n > 2147483647 && c == 1) || ( n > 2147483648 
		return (2147483649);*/
	printf("%li\n", n);
	n = n * c;
	printf("%li\n", n);
	return (n);
}
