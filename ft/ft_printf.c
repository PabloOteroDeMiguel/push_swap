/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 09:39:56 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/02 11:12:10 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_character(char c, va_list ap, int *cont)
{
	if (c == 'c')
		*cont += ft_putchar_fd_p(va_arg(ap, int), 1);
	else if (c == 's')
		*cont += ft_putstr_fd_p(va_arg(ap, char *), 1);
	else if (c == 'p')
	{
		write(1, "0x", 2);
		*cont += ft_putnbr_base_n((unsigned long long)va_arg(ap, void *),
				 "0123456789abcdef") + 2;
	}
	else if (c == 'd' || c == 'i')
		*cont += ft_putnbr_base_p(va_arg(ap, int), "0123456789", 1);
	else if (c == 'u')
		*cont += ft_putnbr_base_p(va_arg(ap, int), "0123456789", 0);
	else if (c == 'x')
		*cont += ft_putnbr_base_p(va_arg(ap, int), "0123456789abcdef", 0);
	else if (c == 'X')
		*cont += ft_putnbr_base_p(va_arg(ap, int), "0123456789ABCDEF", 0);
	else
		*cont += ft_putchar_fd_p(c, 1);
}

int	ft_printf(const char *str, ...)
{
	int		cont;
	int		i;
	va_list	ap;

	cont = 0;
	i = 0;
	if (!str)
		return (0);
	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			ft_character(str[i], ap, &cont);
		}
		else
		{
			write(1, &str[i], 1);
			cont++;
		}
		i++;
	}
	va_end(ap);
	return (cont);
}
