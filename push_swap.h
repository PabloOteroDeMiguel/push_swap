/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:34:31 by potero            #+#    #+#             */
/*   Updated: 2021/11/12 13:46:03 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include<unistd.h>
#include "libft.h"
#include "ft_printf.h"

typedef struct s_column
{
	long int		num;
	struct s_column	*next;
}	t_column;

int			main(int argc, char **argv);
t_column	*ps_lstnew(long int  num);
int			ps_lstsize(t_column *column);
t_column	*ps_lstlast(t_column *lst);
void		ps_lst_add_back(t_column **column, t_column *new);
void		ps_error(int a);
int			ps_check_arg(char   *str);
void		ps_print_column(t_column *column);
int			ps_repeat(t_column *column);
long int			ps_atoi(const char *str);


#endif
