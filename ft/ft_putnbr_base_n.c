/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:23:14 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/02 11:11:35 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_n(unsigned long long nbr, char *base)
{
	unsigned long long	m;
	char				c;
	int					i;

	m = ft_strlen_p(base);
	i = 0;
	if (nbr >= m)
		i += ft_putnbr_base_n((nbr / m), base);
	c = base[nbr % m];
	i++;
	write(1, &c, 1);
	return (i);
}
