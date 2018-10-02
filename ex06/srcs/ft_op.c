/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 02:52:59 by seli              #+#    #+#             */
/*   Updated: 2018/10/02 03:29:53 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"

void	ft_add(long x, long y)
{
	ft_putnbr(x + y);
}

void	ft_subtract(long x, long y)
{
	ft_putnbr(x - y);
}

void	ft_multiply(long x, long y)
{
	ft_putnbr(x * y);
}

void	ft_divide(long x, long y)
{
	if (y == 0)
		ft_putstr(ERROR_DIVIDE_BY_ZERO);
	else
		ft_putnbr(x / y);
}

void	ft_mod(long x, long y)
{
	if (y == 0)
		ft_putstr(ERROR_MOD_BY_ZERO);
	else
		ft_putnbr(x % y);
}
