/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 03:01:09 by seli              #+#    #+#             */
/*   Updated: 2018/10/02 17:16:53 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(long nb)
{
	long	divisor;
	long	c;

	if (nb < 0)
		ft_putchar('-');
	divisor = 1000000000000000000;
	while (nb / divisor == 0 && divisor != 1)
	{
		divisor /= 10;
	}
	while (divisor != 1)
	{
		c = (nb / divisor) % 10;
		if (c < 0)
			c = -c;
		ft_putchar(c + '0');
		divisor /= 10;
	}
	c = nb % 10;
	if (c < 0)
		c = -c;
	ft_putchar(c + '0');
}

long	ft_atoi(char *str)
{
	long	result;
	long	prev_result;
	int		sign;

	sign = 1;
	result = 0;
	while (ft_isspace(str))
		str++;
	if (*str == '+' || *str == '-')
		sign = *str++ == '-' ? -1 : 1;
	while ('0' <= *str && *str <= '9')
	{
		prev_result = result;
		result = result * 10 + (*str - '0') * sign;
		if (result / 10 != prev_result)
			return (sign == 1 ? -1 : 0);
		str++;
	}
	return (result);
}

int		ft_isspace(char *str)
{
	int result;

	result = FALSE;
	if (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		result = TRUE;
	return (result);
}
