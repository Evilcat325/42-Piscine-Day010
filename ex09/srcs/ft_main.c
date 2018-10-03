/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 02:24:13 by seli              #+#    #+#             */
/*   Updated: 2018/10/02 18:43:29 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main.h"

int		main(int argc, char **argv)
{
	long	x;
	long	y;
	t_ops	f;

	if (argc != 4)
		return (0);
	x = ft_atoi(argv[1]);
	f = ft_str_to_f(argv[2]);
	y = ft_atoi(argv[3]);
	f(x, y);
	ft_putchar('\n');
	return (0);
}

t_ops	ft_str_to_f(char *str)
{
	int i;

	i = 0;
	while (i < OPS_SIZE)
	{
		if (ft_strcmp(str, g_opptab[i]->str) == 0)
			return (g_opptab[i]->fptr);
		i++;
	}
	return (g_opptab[i - 1]->fptr);
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
	UNUSED(x);
	UNUSED(y);
	ft_putstr(ERROR_USAGE);
}
