/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 13:54:11 by seli              #+#    #+#             */
/*   Updated: 2018/10/02 16:01:34 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_empty_condition(unsigned char *s1, unsigned char *s2, int start);
int		ft_strcmp(char *s1, char *s2);

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	if (!tab[0])
		return ;
	i = 0;
	while (tab[i + 1])
	{
		j = 0;
		while (tab[j + 1])
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char *us1;
	unsigned char *us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	if (!*us1 || !*us2)
		return (ft_empty_condition(us1, us2, 1));
	while (*us1 && *us2)
	{
		if (*us1 > *us2)
			return (1);
		else if (*us1 < *us2)
			return (-1);
		us1++;
		us2++;
	}
	return (ft_empty_condition(us1, us2, 0));
}

int		ft_empty_condition(unsigned char *s1, unsigned char *s2, int start)
{
	if (!*s1 && !*s2)
		return (0);
	else if (start)
		return (!*s1 ? -*s2 : *s1);
	else
		return (!*s1 ? -1 : 1);
}
