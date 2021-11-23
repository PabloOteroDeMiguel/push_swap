/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:34:31 by potero            #+#    #+#             */
/*   Updated: 2021/11/23 13:15:53 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct s_column
{
	long int		num;
	int				max;
	int				min;
	int				pos;

	struct s_column	*next;
}	t_column;

int			main(int argc, char **argv);
t_column	*ps_lstnew(long int num);
int			ps_lstsize(t_column *column);
t_column	*ps_lstlast(t_column *lst);
void		ps_lst_add_back(t_column **column, t_column *new);
void		ps_error(int a);
int			ps_check_arg(char *str);
void		ps_print_column(t_column *column_a, t_column *column_b);
int			ps_repeat(t_column *column);
long int	ps_atoi(const char *str);
void		ps_add_front(t_column **column, t_column *new);
void		ps_del_one(t_column *column, void (*del)(void*));
void		ps_swap(t_column **column, char c);
void		ps_ss(t_column **column_a, t_column **column_b);
void		ps_push(t_column **column_a, t_column **column_b, char c);
void		ps_rotate(t_column **column, char c);
void		ps_rr(t_column **column_1, t_column **column_2);
void		ps_reverse_r(t_column **column, char c);
void		ps_rrr(t_column **column_1, t_column **column_2);
int			ps_order(t_column *column);
void		ps_limits(t_column *column);
void		ps_position(t_column *column);
void		ps_step_one(t_column *column_a, t_column *column_b);
void		ps_step_two(t_column *column);
void		ps_step_three(t_column *column_a, t_column *column_b);
void		ps_free(t_column **column);
void		ps_par(t_column **column_a, t_column **column_b);
void		ps_nmin(t_column *column, int n);
int			ps_closer(t_column *column, int n);
void		ps_parts(t_column *column_a, t_column *column_b);

#endif
