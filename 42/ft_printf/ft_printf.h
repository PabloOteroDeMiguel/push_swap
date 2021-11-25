/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 09:42:04 by potero-d          #+#    #+#             */
/*   Updated: 2021/11/02 11:11:02 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putchar_fd_p(char c, int fd);
int		ft_putstr_fd_p(char *s, int fd);
int		ft_putnbr_base_p(int nbr, char *base, int p);
int		ft_putnbr_base_n(unsigned long long nbr, char *base);
size_t	ft_strlen_p(const char *str);

#endif
