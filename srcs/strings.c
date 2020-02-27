/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <amurtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:36:16 by amurtone          #+#    #+#             */
/*   Updated: 2020/02/27 13:25:02 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	raligned(t_struct *stru, char c, char *str, int i)
{
	if (stru->minus != 0)
	{
		c = ' ';
		if (stru->precisionf && i > stru->precision)
			i = stru->precision;
		stru->len = stru->len + write(1, str, i);
		stru->printed = stru->printed + i;
		while (stru->width > i)
		{
			stru->len = stru->len + write(1, &c, 1);
			stru->printed++;
			stru->width--;
		}
	}
}

void	laligned(t_struct *stru, char c, char *str, int i)
{
	if (stru->minus == 0)
	{
		if (stru->precisionf && i > stru->precision)
			i = stru->precision;
		if (stru->width > i)
		{
			while ((stru->width - i) > 0)
			{
				stru->len = stru->len + write (1, &c, 1);
				stru->printed++;
				stru->width--;
			}
		}
		stru->len = stru->len + write(1, str, i);
		stru->printed = stru->printed + i;
	}
}

void	ifnull(void *str, t_struct *stru)
{
	if (str == NULL)
	{
		stru->printed += write(1, "(null)", 6);
		stru->minus = 3;
	}
}

void	ifstring(t_struct *stru, va_list ap)
{
	char	*str;
	int		i;
	char	c;

	if (stru->zero == 1)
		c = '0';
	else
		c = ' ';
	str = (char *)va_arg(ap, char *);
	if (str == NULL);
		str = "(null)";
	i = ft_strlen(str);
	if (stru->minus == 1)
		raligned(stru, c, str, i);
	else if (stru->minus == 0)
		laligned(stru, c, str, i);
	
}