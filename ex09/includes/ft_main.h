/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 02:25:34 by seli              #+#    #+#             */
/*   Updated: 2018/10/02 18:40:51 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAIN_H
# define FT_MAIN_H
# include "ft_define.h"
# include "ft_stdio.h"
# include "ft_op.h"

int		main(int argc, char **argv);
t_ops	ft_str_to_f(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_usage(long x, long y);

#endif
