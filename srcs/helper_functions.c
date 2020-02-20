/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <amurtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 10:00:59 by amurtone          #+#    #+#             */
/*   Updated: 2020/02/06 10:07:59 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void    ft_widthasterisk(const char *fmt, t_struct *stru, va_list ap)
{
    if (fmt[stru->i] == '*')
    {
        stru->width = va_arg(ap, int);
        if (stru->width < 0)
        {
            stru->minus = 1;
            stru->width = -(stru->width);
        }
        while (fmt[stru->i] == '*')
            stru->i++;
    }
}