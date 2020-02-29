/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <amurtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 04:46:32 by amurtone          #+#    #+#             */
/*   Updated: 2020/02/29 05:02:02 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_itoa_base_upper(intmax_t nbr, intmax_t base)
{
	char		*str;
	long long	n;
	int			sign;
	int			i;

	n = (nbr < 0) ? -nbr : nbr;
	sign = (nbr < 0 && base == 10) ? -1 : 0;
	i = (sign == -1) ? 2 : 1;
	while ((n /= base) >= 1)
		i++;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		exit(1);
	str[i] = '\0';
	n = (nbr < 0) ? -nbr : nbr;
	while (i-- + sign)
	{
		str[i] = (n % base < 10) ? n % base + '0' : n % base + 'A' - 10;
		n /= base;
	}
	(i == 0) ? str[i] = '-' : 0;
	return (str);
}