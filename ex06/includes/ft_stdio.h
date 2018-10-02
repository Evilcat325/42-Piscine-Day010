/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 02:54:35 by seli              #+#    #+#             */
/*   Updated: 2018/10/02 03:05:59 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H
# include <unistd.h>
# include "ft_define.h"

void	ft_putchar(char c);
void	ft_putnbr(long nbr);
void	ft_putstr(char *str);
int		ft_isspace(char *str);
long	ft_atoi(char *str);

#endif
