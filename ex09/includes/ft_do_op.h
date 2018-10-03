/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 19:09:53 by seli              #+#    #+#             */
/*   Updated: 2018/10/02 19:53:00 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H
# include "ft_define.h"
# include "ft_stdio.h"

extern t_opp g_opptab[];

int		ft_strcmp(char *s1, char *s2);
void	ft_usage(long x, long y);
t_ops	ft_str_to_f(char *str);

#endif
