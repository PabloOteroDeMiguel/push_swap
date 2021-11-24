/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:59:47 by potero            #+#    #+#             */
/*   Updated: 2021/11/24 13:49:05 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<stdio.h>

int main(int argc, char **argv)
{	
	char		**str;
	int			i;
	int			j;
	int			a;
	int			numbers;
	long int	num;
	t_column	*column_a;
	t_column	*column_b;
//	t_column	*aux;

	a = 1;
	i = 0;
	column_a = malloc(sizeof(t_list));
	column_b = malloc(sizeof(t_list));
//	printf("A-> %p\n", column_a);
//	printf("B-> %p\n", column_b);

	column_a = 0;
	column_b = 0;
	while (a < argc)
	{
		str = ft_split(argv[a], ' ');	
		while (str[i])
		{	
			if (ps_check_arg(str[i]) == 1)
			{
				num = ps_atoi(str[i]);
		//		ft_printf("num-> %i\n", num);
		//		ft_printf("lst-> %i\n", ps_lstnew(num)->num);
				ps_lst_add_back(&column_a, ps_lstnew(num));
		//		aux = column_a;
		//		ft_printf("last-> %i\n", ps_lstlast(aux)->num);
			}
			else
			{
				ps_error(1);
				return (0);
			}
			i++;
			free(str[i - 1]);
		}
	//	free(str[i]);
		free(str);
		a++;
		i = 0;
	}
	if (ps_repeat(column_a) == 1)
	{
		ps_error(1);
		return (0);
	}
//	else
//		ps_print_column(column_a, column_b);

//	ps_step_one(column_a, column_b);
//	ps_step_one(&column_a, &column_b);
	
	numbers = ((ps_lstsize(column_a) - 5) / 5);
	j = 0;
	while (j < 5)
	{
		if (ps_order(column_a) != 1)
			ps_parts(&column_a, &column_b, numbers);
		j++;
	}
	while (ps_order(column_a) != 1)
		ps_par(&column_a, &column_b);
	while (column_b)
		ps_parts_two(&column_a, &column_b);

	if (ps_order(column_a) == 1)
		ps_print_column(column_a, column_b);
	else
		ft_printf("NO no NooooOooo");

/*	ps_par(&column_a, &column_b);
	ps_par(&column_a, &column_b);
	ps_par(&column_a, &column_b);
	ps_par(&column_a, &column_b);
	ps_par(&column_a, &column_b);
	ps_par(&column_a, &column_b);
	ps_par(&column_a, &column_b);
	ps_par(&column_a, &column_b);
	ps_par(&column_a, &column_b);
	ps_par(&column_a, &column_b);
	ps_par(&column_a, &column_b);
	ps_par(&column_a, &column_b);
	ps_par(&column_a, &column_b);
	ps_par(&column_a, &column_b);
*/
/*	while (ps_order(column_a) != 1)
	{	
		ps_par(&column_a, &column_b);
	}
	while (column_b)
	{
		ps_push(&column_b, &column_a, 'a');
	}
*/
/*	ps_free(&column_a);
	free(column_a);
	ps_free(&column_b);
	free(column_b);
*/
//	ps_print_column(column_a, column_b);


/*	if (ps_order(column_a) == 1)
		ft_printf("The column is neat!\n");
	else
		ft_printf("The column is NOT neat!\n");
*/
/*	ps_limits(column_a);
	ps_position(column_a);
	ps_nmin(column_a, 5);
	aux = column_a;
	while (aux)
	{
		if (aux->max == 1)
			ft_printf("The maximum is %i\n", aux->num);
		else if (aux->min == 1)
			ft_printf("The minimum is %i\n", aux->num);
		aux = aux->next;
	}
	ft_printf("closer-> %i\n", ps_closer(column_a, 5));
*/
/*	ps_swap(&column_a, 'a');
	ps_print_column(column_a, column_b);
	ps_ss(&column_a, &column_b);
	ps_print_column(column_a, column_b);
*/
/*	ps_push(&column_a, &column_b, 'b');
	ps_push(&column_a, &column_b, 'b');
	ps_push(&column_a, &column_b, 'b');
	ps_print_column(column_a, column_b);
	ps_push(&column_b, &column_a, 'a');
	ps_print_column(column_a, column_b);
*/
/*	ps_rotate(&column_a, 'a');
	ps_rotate(&column_a, 'a');
//	ps_rotate(&column_b, 'b');
	ps_print_column(column_a, column_b);
*/
/*	ps_rr(&column_a, &column_b );
	ps_print_column(column_a, column_b);
	ps_reverse_r(&column_a, 'a');
	ps_print_column(column_a, column_b);	
*/
/*	ps_reverse_r(&column_b, 'b');
	ps_print_column(column_a, column_b);
	ps_rrr(&column_a, &column_b);
	ps_print_column(column_a, column_b);
*/
//	system("leaks push_swap");
}	
