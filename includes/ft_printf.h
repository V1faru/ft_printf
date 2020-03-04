/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <amurtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 16:06:16 by amurtone          #+#    #+#             */
/*   Updated: 2020/03/04 16:59:26 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>
# include <float.h>
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

typedef	struct			s_struct1
{
	char				*fmt;
	int					printed;
	int					i;
	int					len;
	int					minus;
	int					plus;
	int					space;
	int					zero;
	int					hash;
	int					width;
	int					precision;
	int					precisionf;
	int					length;
}						t_struct;

typedef	struct			s_struct2
{
	char				*str1;
	char				*str2;
	int					precision;
	long double			i;
	long double			fl;
	int					zeros;
	int					precisionaddon;
	int					padding;
	int					beforedcmnbr;
	char				c;
	char				sign;
	int					signint;
	int					hash;
	int					dot;
}						t_struct2;

void					ft_error(void);
void					writeblanks(int n);
void					writezeros(int n);
int						signed_nbr_len(intmax_t n, int base);
int						unsigned_nbr_len(uintmax_t n, int base);
void					ft_widthasterisk(const char *fmt,
						t_struct *stru, va_list ap);
char					*ft_itoa_base_m(uintmax_t nbr, uintmax_t base);
char					*ft_itoa_base_upper(intmax_t nbr, intmax_t base);
char					findchar(t_struct *stru);
int						ft_fmtparse(const char *fmt,
						t_struct *stru, va_list ap, int i);
void					reinitialize(t_struct *stru);
void					ft_modifiers(const char *fmt,
						t_struct *stru, va_list ap);
void					ft_conversions(char c, t_struct *stru, va_list ap);
void					ifchar(t_struct *stru, va_list ap);
void					ifpercent(t_struct *stru);
void					ifstring(t_struct *stru, va_list ap);
void					ifp(t_struct *stru, va_list ap, int oxheading);
void					ifint(t_struct *stru, va_list ap, int sign, intmax_t n);
void					ifoctal(t_struct *stru, va_list ap);
void					ifudint(t_struct *stru, va_list ap);
void					ifhex(t_struct *stru, va_list ap, char x);
void					iffloat(t_struct *stru, va_list ap);
void					lalignedfloat(t_struct *stru, t_struct2 fstru);
void					ralignedfloat(t_struct *stru, t_struct2 fstru);
void					ifbinary(t_struct *stru, va_list ap);
#endif
