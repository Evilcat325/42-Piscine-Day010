/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 23:23:10 by seli              #+#    #+#             */
/*   Updated: 2018/10/02 00:01:17 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *applied;
	int i;

	i = 0;
	applied = malloc(sizeof(int) * length);
	while (i < length)
	{
		applied[i] = f(tab[i]);
		i++;
	}
	return (applied);
}
