/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 19:10:52 by seli              #+#    #+#             */
/*   Updated: 2018/10/02 21:36:41 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

t_ops	ft_str_to_f(char *str)
{
	int i;

	i = 0;
	while (g_opptab[i].str[0])
	{
		if (ft_strcmp(str, g_opptab[i].str) == 0)
			return (g_opptab[i].fptr);
		i++;
	}
	return (g_opptab[i].fptr);
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (*us1 && *us2)
	{
		if (*us1 != *us2)
			return (*us1 - *us2);
		us1++;
		us2++;
	}
	return (*us1 - *us2);
}

void	ft_usage(long x, long y)
{
	int i;

	UNUSED(x);
	UNUSED(y);
	ft_putstr(ERROR_USAGE_FRONT);
	i = 0;
	while (g_opptab[i].str[0])
	{
		ft_putstr(g_opptab[i].str);
		ft_putchar(' ');
		i++;
	}
	ft_putstr(ERROR_USAGE_BACK);
}
