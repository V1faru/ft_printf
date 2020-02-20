/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <amurtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 13:21:31 by amurtone          #+#    #+#             */
/*   Updated: 2020/02/03 09:54:42 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(const char *fmt, ...)
{
	va_list		ap;
	int			result;
	int			fmtlen;
	t_struct	*stru;

	fmtlen = ft_strlen(fmt);
	if (!(stru = (t_struct *)malloc(sizeof(t_struct))))
		exit(1);
	stru->fmt = fmt;
	va_start(ap, fmt);
	if (!fmt[0])
		ft_error("invalid string; usage: ft_printf(\"character: %\c\", 65)");
	if (fmtlen == 1 && fmt[0] == '%')
		exit(1);
	else
		result = ft_fmtparse(fmt, stru, ap, 0);
	va_end(ap);
	free(stru);
	return (result);
}