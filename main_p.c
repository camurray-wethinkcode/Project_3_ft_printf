#include <stdio.h>
#include "libft.h"
#include <limits.h>
#include <float.h>
#include <math.h>

int main()
{
    char c;
    int d;

    c = 'a';
    d = 42;
    printf("***************************************\n");
	printf ("\t\tPTR TEST\n");
	printf("***************************************\n\n");

    ft_printf("ft_printf:\t[]\t[%p]\n", &c);
	printf("printf:\t\t[]\t[%p]\n", &c);
    ft_printf("ft_printf:\t[25]\t[%25p]\n", &c);
	printf("printf:\t\t[25]\t[%25p]\n", &c);
    ft_printf("ft_printf:\t[5]\t[%5p]\n", &c);
	printf("printf:\t\t[5]\t[%5p]\n", &c);
    ft_printf("ft_printf:\t[1]\t[%1p]\n", &c);
	printf("printf:\t\t[1]\t[%1p]\n", &c);
    ft_printf("ft_printf:\t[-25]\t[%-25p]\n", &c);
	printf("printf:\t\t[-25]\t[%-25p]\n\n", &c);

    ft_printf("ft_printf:\t[]\t[%p]\n", &d);
	printf("printf:\t\t[]\t[%p]\n", &d);
    ft_printf("ft_printf:\t[25]\t[%25p]\n", &d);
	printf("printf:\t\t[25]\t[%25p]\n", &d);
    ft_printf("ft_printf:\t[5]\t[%5p]\n", &d);
	printf("printf:\t\t[5]\t[%5p]\n", &d);
    ft_printf("ft_printf:\t[1]\t[%1p]\n", &d);
	printf("printf:\t\t[1]\t[%1p]\n", &d);
    ft_printf("ft_printf:\t[-25]\t[%-25p]\n", &d);
	printf("printf:\t\t[-25]\t[%-25p]\n\n", &d);

    d = INT_MAX;

    ft_printf("ft_printf:\t[]\t[%p]\n", &d);
	printf("printf:\t\t[]\t[%p]\n", &d);
    ft_printf("ft_printf:\t[25]\t[%25p]\n", &d);
	printf("printf:\t\t[25]\t[%25p]\n", &d);
    ft_printf("ft_printf:\t[5]\t[%5p]\n", &d);
	printf("printf:\t\t[5]\t[%5p]\n", &d);
    ft_printf("ft_printf:\t[1]\t[%1p]\n", &d);
	printf("printf:\t\t[1]\t[%1p]\n", &d);
    ft_printf("ft_printf:\t[-25]\t[%-25p]\n", &d);
	printf("printf:\t\t[-25]\t[%-25p]\n\n", &d);
    return (0);
}
