/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ints.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <student.hive.fi>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:20:31 by amurtone          #+#    #+#             */
/*   Updated: 2020/02/27 15:25:44 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void    ifint(t_struct *stru, va_list ap, int sign, intmax_t n)
{
    if (stru->length == 0)
        n = (int)va_arg(ap, int);
    else if (stru->length == HH)
        n = (signed char)va_arg(ap, int);
    else if (stru->length == H)
        n = (short int)va_arg(ap, int);
    else if (stru->length == LL)
        n = (long long int)va_arg(ap, int);
}