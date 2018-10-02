/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 02:25:34 by seli              #+#    #+#             */
/*   Updated: 2018/10/02 16:47:42 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAIN_H
# define FT_MAIN_H
# include "ft_stdio.h"
# include "ft_op.h"
# include "ft_define.h"

int		main(int argc, char **argv);
int		ft_map_str_to_int(char *str);
void	ft_map_int_to_op(void (*ops[6])(long, long));
void	ft_invalid_op(long x, long y);
void	ft_do_op(long x, long y, void (*f)(long, long));

#endif
