/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 02:29:45 by seli              #+#    #+#             */
/*   Updated: 2018/10/02 18:33:59 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEFINE_H
# define FT_DEFINE_H

# define TRUE 1
# define FALSE 0
# define ERROR_DIVIDE_BY_ZERO "Stop : division by zero"
# define ERROR_MOD_BY_ZERO "Stop : modulo by zero"
# define ERROR_USAGE_FRONT "error : only [ "
# define ERROR_USAGE_BACK "] are acepted."
# define OPS_SIZE sizeof(g_opptab) / sizeof(s_opp)
# define UNUSED(X) (void)(X)

typedef void	(*t_ops)(long, long);

typedef struct	s_opp
{
	char	*str;
	t_ops	fptr;
}				t_opp;

#endif
