/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <amurtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 13:22:19 by amurtone          #+#    #+#             */
/*   Updated: 2020/02/29 03:24:51 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include "../libft/libft.h"

# define H				1
# define HH				2
# define L				3
# define LL				4
# define J				5
# define Z				6
# define BIGL			7

# define POSITIVE	 	66
# define NEGATIVE		88

# define SCONVERSIONS 	"cspdiouxXf%"
# define SFLAGS 		"#-+ .*0123456789hljz"
# define ALLSYMBOLS 	"cspdiouxXfb%#-+ .*0123456789hLljz"
# define WTF            "cspdiouxXfb"
/* create necessary struct */
typedef struct  s_struct1
{
    char    *fmt;
    int     printed;
    int     i;
    int     len;
    int     minus;
    int     plus;
    int     space;
    int     zero;
    int     hash;
    int     width;
    int     precision;
    int     precisionf;
    int     length;
}               t_struct;

typedef struct  s_struct2
{
    char    *str1;
    char    *str2;
    int     precision;
    long double     i;
    long double     fl;
    int     zeros;
    int     precisionaddon;
    int     padding;
    int     beforedcmnbr;
    char     c;
    char     sign;
    int     signint;
    int     hash;
    int     dot;
}               t_struct2;
/* prototype of functions */
void    ft_error(char *msg);
void    ft_widthasterisk(const char *fmt, t_struct *stru, va_list ap);
#endif