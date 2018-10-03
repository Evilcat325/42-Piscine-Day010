/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 02:04:51 by seli              #+#    #+#             */
/*   Updated: 2018/10/02 23:06:46 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int prev;
	int result;

	i = 0;
	prev = 0;
	while (i < length - 1)
	{
		result = f(tab[i], tab[i + 1]);
		if ((prev < 0 && result > 0) || (prev > 0 && result < 0))
			return (0);
		prev = (prev > 0 || result > 0) ? 1 : -1;
		i++;
	}
	return (1);
}
