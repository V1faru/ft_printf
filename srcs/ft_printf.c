/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <amurtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:42:32 by amurtone          #+#    #+#             */
/*   Updated: 2020/01/21 14:55:15 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(const char *fmt, ...)
{
	char *str;
	char *traverse;
	int i;
	va_list ap;

	i = 0;
	va_start(ap, fmt);
	while (*fmt)
	{
	
	}
	
}