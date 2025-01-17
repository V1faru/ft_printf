/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <amurtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:51:35 by amurtone          #+#    #+#             */
/*   Updated: 2020/03/05 13:00:54 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int		ft_printf(const char *fmt, ...);

int main(void)
{
    int     ret = 0;
    int x = 42;
    int *p1, *p2;
    //unsigned long long  ll = 1844674407370955161;

    p1 = &x;
    p2 = p1;
    
    setvbuf(stdout, NULL, _IONBF, 0);
    // // Testing Char
    // printf("TESTING CHAR\n");
    // printf("\n");
    // ret = ft_printf("My ft_printf: Char test -> %c\n", 'Z');
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: Char test -> %c\n", 'Z');
    // printf("ret value OG= %d\n", ret);
    // ret = ft_printf("My ft_printf: Char test -> %5c\n", 'Z');
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: Char test -> %5c\n", 'Z');
    // printf("ret value OG= %d\n", ret);   

    // // Testing STR
    // printf("TESTING STR\n");
    // printf("\n");
    // ret = ft_printf("My ft_printf: STR test -> %s\n", "Hello World!");
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: STR test -> %s\n", "Hello World!");
    // printf("ret value OG= %d\n", ret);
    // printf("TESTING STR PRECISION\n");
    // ret = ft_printf("My ft_printf: STR test -> %.5s\n", "Hello World!");
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: STR test -> %.5s\n", "Hello World!");
    // printf("ret value OG= %d\n", ret);
    // printf("TESTING STR WIDTH\n");
    // ret = ft_printf("My ft_printf: STR test -> %20s\n", "Hello World!");
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: STR test -> %20s\n", "Hello World!");
    // printf("ret value OG= %d\n", ret);
    // printf("MULTIPLE STRS WITH WIDTH\n");
    // ret = ft_printf("%20s %-10s\n", "Hello", "World!");
    // printf("ret value FT= %d\n", ret);
    // ret = printf("%20s %-10s\n", "Hello", "World!");
    // printf("ret value OG= %d\n", ret);

    // TESTING UNSIGNED INT

    // ret = ft_printf("My ft_printf: Unsigned Int test -> %u\n", 4242424242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: Unsigned Int test -> %u\n", 4242424242);
    // printf("ret value OG= %d\n", ret);
    // ret = ft_printf("My ft_printf: Unsigned Int test -> %020u\n", 4242424242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: Unsigned Int test -> %020u\n", 4242424242);
    // printf("ret value OG= %d\n", ret);
    // ret = ft_printf("My ft_printf: Unsigned Int test -> %.0u\n", 0);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: Unsigned Int test -> %.0u\n", 0);
    // printf("ret value OG= %d\n", ret);
    // ret = ft_printf("My ft_printf: Unsigned Int test -> %u\n", -4242424242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: Unsigned Int test -> %u\n", -4242424242);
    // printf("ret value OG= %d\n", ret);
  
    // TESTING POINTERS

    // ret = ft_printf("My ft_printf: PTR test -> %p\n", p1);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: PTR test -> %p\n", p1);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: PTR test -> %p %p\n", p1, p2);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: PTR test -> %p %p\n", p1, p2);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: PTR test -> %20p\n", p1);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: PTR test -> %20p\n", p1);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: PTR test -> %-20p\n", p1);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: PTR test -> %-20p\n", p1);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: PTR test -> %.15p\n", p1);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: PTR test -> %.15p\n", p1);
    // printf("ret value OG= %d\n", ret);

    // TESTING xX

    // ret = ft_printf("My ft_printf: xX test -> %x\n", 42424242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: xX test -> %x\n", 42424242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: xX test -> %X\n", 42424242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: xX test -> %X\n", 42424242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: xX test -> %20x %20X\n", 42424242, 399999);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: xX test -> %20x %20X\n", 42424242, 399999);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: xX test -> %010x %010X\n", 42424242, 399999);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: xX test -> %010x %010X\n", 42424242, 399999);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: xX test -> %#x %#X\n", 42424242, 0);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: xX test -> %0#x %0#X\n", 42424242, 0);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: xX test -> %#20X\n", 42424242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: xX test -> %#20X\n", 42424242);
    // printf("ret value OG= %d\n", ret);

    // // TESTING OCTAL

    // ret = ft_printf("My ft_printf: Octal test -> %o\n", 4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: Octal test -> %o\n", 4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: Octal test -> %#o\n", 4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: Octal test -> %#o\n", 4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: Octal test -> %010o\n", 4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: Octal test -> %010o\n", 4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: Octal test -> %0-10o\n", 4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: Octal test -> %0-10o\n", 4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: Octal test -> %.20o\n", 4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: Octal test -> %.20o\n", 4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: Octal test -> %.o\n", 0);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: Octal test -> %.o\n", 0);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: Octal test -> %o\n", 0);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: Octal test -> %o\n", 0);
    // printf("ret value OG= %d\n", ret);

    // TESTING INTS
    // ret = ft_printf("My ft_printf: INT i test -> %i\n", 42);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT i test -> %i\n", 42);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT d test -> %d\n", 42);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT d test -> %d\n", 42);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT i test -> %i\n", -42);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT i test -> %i\n", -42);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT d test -> %d\n", -42);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT d test -> %d\n", -42);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT d width test -> %20d\n", 4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT d width test -> %20d\n", 4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT i width test -> %20i\n", 4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT i width test -> %20i\n", 4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT d - width test -> %-20d\n", 4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT d - width test -> %-20d\n", 4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT i - width test -> %-20i\n", 4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT i - width test -> %-20i\n", 4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT d 0 fill test -> %010d\n", 4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT d 0 fill test -> %010d\n", 4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT 0 fill test -> %010i\n", 4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT 0 fill test -> %010i\n", 4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT d + sign test -> %+10d\n", 4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT d + sign test -> %+10d\n", 4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT + sign test -> %+10i\n", -4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT + sign test -> %+10i\n", -4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT d + sign test -> %+10d\n", -4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT d + sign test -> %+10d\n", -4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT + sign test -> %+10i\n", -4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT + sign test -> %+10i\n", -4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT d + sign test -> % d\n", -4242);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT d + sign test -> % d\n", -4242);
    // printf("ret value OG= %d\n", ret);

    // ret = ft_printf("My ft_printf: INT + sign test -> % 05i\n", 0);
    // printf("ret value FT= %d\n", ret);
    // ret = printf("Origi printf: INT + sign test -> % 05i\n", 0);
    // printf("ret value OG= %d\n", ret);

    // TESTING ll
    // ret = ft_printf("My ft_printf: test -> %llu\n", 18446744073709551615);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %llu\n", 18446744073709551615);
    // printf("ret value OG= %d \n", ret);


    // ret = ft_printf("My ft_printf: test -> %lld\n", 1844674407370955161);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %lld\n", 1844674407370955161);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %lli\n", 1844674407370955161);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %lli\n", 1844674407370955161);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %llo\n", 1844674407370955161);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %llo\n", 1844674407370955161);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %llx\n", 1844674407370955161);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %llx\n", 1844674407370955161);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %llX\n", 1844674407370955161);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %llX\n", 1844674407370955161);
    // printf("ret value OG= %d \n", ret);

    //TESTING l
    // ret = ft_printf("My ft_printf: test -> %ld\n", 2147483647);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %ld\n", 2147483647);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %li\n", 2147483647);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %li\n", 2147483647);
    // printf("ret value OG= %d \n", ret);
    
    // ret = ft_printf("My ft_printf: test -> %lo\n", 2147483647);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %lo\n", 2147483647);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %lu\n", 2147483647);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %lu\n", 2147483647);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %lx\n", 2147483647);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %lx\n", 2147483647);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %lX\n", 2147483647);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %lX\n", 2147483647);
    // printf("ret value OG= %d \n", ret);

    //TESTING hh
    // ret = ft_printf("My ft_printf: test -> %hhd\n", 122);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %hhd\n", 122);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %hhi\n", 122);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %hhi\n", 122);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %hho\n", 122);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %hho\n", 122);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %hhu\n", 122);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %hhu\n", 122);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %hhx\n", 122);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %hhx\n", 122);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %hhX\n", 122);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %hhX\n", 122);
    // printf("ret value OG= %d \n", ret);

    // TESTING h
    // ret = ft_printf("My ft_printf: test -> %hd\n", 32767);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %hd\n", 32767);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %hi\n", 32767);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %hi\n", 32767);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %ho\n", 32767);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %ho\n", 32767);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %hu\n", 32767);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %hu\n", 32767);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %hx\n", 32767);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %hx\n", 32767);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %hX\n", 32767);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %hX\n", 32767);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: j test -> %jd\n", 2147483647);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: j test -> %jd\n", 2147483647);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: z test -> %zd\n", 3276);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: z test -> %zd\n", 3276);
    // printf("ret value OG= %d \n", ret);


    // TESTING FLOATS PREC
    // ret = ft_printf("My ft_printf: test -> %4.2f\n", 3.1416);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %4.2f\n", 3.1416);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %.0f\n", 3.1416);
    // printf("ret value FT= %d \n", ret);
    // ret = printf("Origi printf: test -> %.0f\n", 3.1416);
    // printf("ret value OG= %d \n", ret);

    // ret = ft_printf("My ft_printf: test -> %.f\n", 2333.1416);
    // printf("ret value FT= %d \n", ret);
	// while (1)
	// {

	// }
    // ret = printf("Origi printf: test -> %.f\n", 2333.1416);
    // printf("ret value OG= %d \n", ret);

    // COLORS

    // ret = ft_printf("My ft_printf: test -> %s\n", RED);
    // ret = ft_printf(RED"My ft_printf: test -> \n"RESET);
    // ret = ft_printf(YELLOW"My ft_printf: test -> \n"RESET);
    // ret = ft_printf(BG_BLUE"My ft_printf: test -> %s\n", RESET);
    // ret = ft_printf(BG_BOLD_CYAN"My ft_printf: test -> %s\n", RESET);
    // ret = ft_printf(BG_BOLD_MAGENTA"My ft_printf: test -> %s\n", RESET);

    // TESTING EVAL

    ret = ft_printf("My ft_printf: test -> %s %p %d\n", "Hello", p1, 42);
    printf("ret value FT= %d\n", ret);
    ret = printf("Origi printf: test -> %s %p %d\n", "Hello", p1, 42);
    printf("ret value OG= %d\n", ret);

    ret = ft_printf("My ft_printf: percent %% test -> %%\n");
    printf("ret value FT= %d\n", ret);
    ret = printf("Origi printf: percent %% test -> %%\n");
    printf("ret value OG= %d\n", ret);

    ret = ft_printf("My ft_printf: test -> %s %s %s\n", "Hello", "World", "!");
    printf("ret value FT= %d\n", ret);
    ret = printf("Origi printf: test -> %s %s %s\n", "Hello", "World", "!");
    printf("ret value OG= %d\n", ret);

    ret = ft_printf("My ft_printf: test -> %i %o %u %x %X %c\n", 42, 4242, 42, 42424242, 42424242, 'C');
    printf("ret value FT= %d\n", ret);
    ret = printf("Origi printf: test -> %i %o %u %x %X %c\n", 42, 4242, 42, 42424242, 42424242, 'C');
    printf("ret value OG= %d\n", ret);

    ret = ft_printf("My ft_printf: test -> %c %i %i %c\n", 'A', 42, 52, 'B');
    printf("ret value FT= %d\n", ret);
    ret = printf("Origi printf: test -> %c %i %i %c\n", 'A', 42, 52, 'B');
    printf("ret value OG= %d\n", ret);

    ret = ft_printf("My ft_printf: test -> %c %i %i %c\n", 'A', 42, 52, 'B');
    printf("ret value FT= %d\n", ret);
    ret = printf("Origi printf: test -> %c %i %i %c\n", 'A', 42, 52, 'B');
    printf("ret value OG= %d\n", ret);

    ret = ft_printf("My ft_printf: test -> %#o %010d %-10s %+10s\n", 42424242, 42, "Hello", "Hello");
    printf("ret value FT= %d\n", ret);
    ret = printf("Origi printf: test -> %#o %010d %-10s %+10s\n", 42424242, 42, "Hello", "Hello");
    printf("ret value OG= %d\n", ret);

    ret = ft_printf("My ft_printf: test -> %-10s\n", "Hello");
    printf("ret value FT= %d\n", ret);
    ret = printf("Origi printf: test -> %-10s\n", "Hello");
    printf("ret value OG= %d\n", ret);

    ret = ft_printf("My ft_printf: test -> %+10s\n", "Hello");
    printf("ret value FT= %d\n", ret);
    ret = printf("Origi printf: test -> %+10s\n", "Hello");
    printf("ret value OG= %d\n", ret);

    ret = ft_printf("My ft_printf: test -> %20s\n", "Hello");
    printf("ret value FT= %d\n", ret);
    ret = printf("Origi printf: test -> %20s\n", "Hello");
    printf("ret value OG= %d\n", ret);
    // return (0);







    return (0);
}