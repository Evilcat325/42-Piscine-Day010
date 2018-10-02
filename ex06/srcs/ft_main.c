/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 02:24:13 by seli              #+#    #+#             */
/*   Updated: 2018/10/02 03:20:31 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main.h"

int		main(int argc, char **argv)
{
	long	x;
	long	y;
	int		op;
	int		*ops[6];

	if (argc != 4)
		return (0);
	x = ft_atoi(argv[1]);
	op = ft_map_str_to_int(argv[2]);
	y = ft_atoi(argv[3]);
	ft_map_int_to_op(ops);
	ft_do_op(x, y, ops[op]);
	return (0);
}

int		ft_map_str_to_int(char *str)
{
	if (!*str)
		return (OP_INVALID);
	if (*str == '+' && *(str + 1) == '\0')
		return (OP_ADD);
	if (*str == '-' && *(str + 1) == '\0')
		return (OP_SUB);
	if (*str == '*' && *(str + 1) == '\0')
		return (OP_MUT);
	if (*str == '/' && *(str + 1) == '\0')
		return (OP_DIV);
	if (*str == '%' && *(str + 1) == '\0')
		return (OP_MOD);
	return (OP_INVALID);
}

void	ft_map_int_to_op(int *ops[6])
{
	ops[OP_INVALID] = ft_invalid_op;
	ops[OP_ADD] = ft_add;
	ops[OP_SUB] = ft_subtract;
	ops[OP_DIV] = ft_divide;
	ops[OP_MOD] = ft_mod;
}

void	ft_invalid_op(long x, long y)
{
	ft_putchar('0');
}

void	ft_do_op(long x, long y, void (*f)(long, long))
{
	f(x, y);
}
