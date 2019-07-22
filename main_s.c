#include <stdio.h>
#include "libft.h"
#include <limits.h>
#include <float.h>
#include <math.h>

int main()
{
    char *s;

    s = "salutcava";

    printf("***************************************\n");
	printf ("\t\tSTR TEST\n");
	printf("***************************************\n\n");
    
	ft_printf("hello\n");
	ft_printf("hello\n");
    ft_printf("ft_printf:\t[]\t[%s]\n", s);
	printf("printf:\t\t[]\t[%s]\n", s);
    ft_printf("ft_printf:\t[-]\t[%-s]\n", s);
	printf("printf:\t\t[-]\t[%-s]\n", s);
    ft_printf("ft_printf:\t[10]\t[%10s]\n", s);
	printf("printf:\t\t[10]\t[%10s]\n", s);
    ft_printf("ft_printf:\t[.10]\t[%.10s]\n", s);
	printf("printf:\t\t[.10]\t[%.10s]\n", s);
    ft_printf("ft_printf:\t[9]\t[%9s]\n", s);
	printf("printf:\t\t[9]\t[%9s]\n", s);
    ft_printf("ft_printf:\t[.9]\t[%.9s]\n", s);
	printf("printf:\t\t[.9]\t[%.9s]\n", s);
    ft_printf("ft_printf:\t[4]\t[%4s]\n", s);
	printf("printf:\t\t[4]\t[%4s]\n", s);
    ft_printf("ft_printf:\t[.4]\t[%.4s]\n", s);
	printf("printf:\t\t[.4]\t[%.4s]\n", s);
	ft_printf("ft_printf:\t[.0]\t[%.0s]\n", s);
	printf("printf:\t\t[.0]\t[%.0s]\n", s);
    ft_printf("ft_printf:\t[.]\t[%.s]\n", s);
	printf("printf:\t\t[.]\t[%.s]\n", s);
    ft_printf("ft_printf:\t[.1]\t[%.1s]\n", s);
	printf("printf:\t\t[.1]\t[%.1s]\n", s);
    ft_printf("ft_printf:\t[1]\t[%1s]\n", s);
	printf("printf:\t\t[1]\t[%1s]\n", s);
    ft_printf("ft_printf:\t[25.2]\t[%25.2s]\n", s);
	printf("printf:\t\t[25.2]\t[%25.2s]\n", s);
    ft_printf("ft_printf:\t[2.25]\t[%2.25s]\n", s);
	printf("printf:\t\t[2.25]\t[%2.25s]\n", s);
    ft_printf("ft_printf:\t[-25]\t[%-25s]\n", s);
	printf("printf:\t\t[-25]\t[%-25s]\n", s);
    ft_printf("ft_printf:\t[-25.2]\t[%-25.2s]\n", s);
	printf("printf:\t\t[-25.2]\t[%-25.2s]\n\n", s);
    s = NULL;
    ft_printf("ft_printf:\t[]\t[%s]\n", s);
	printf("printf:\t\t[]\t[%s]\n", s);
    ft_printf("ft_printf:\t[-]\t[%-s]\n", s);
	printf("printf:\t\t[-]\t[%-s]\n", s);
    ft_printf("ft_printf:\t[10]\t[%10s]\n", s);
	printf("printf:\t\t[10]\t[%10s]\n", s);
    ft_printf("ft_printf:\t[.10]\t[%.10s]\n", s);
	printf("printf:\t\t[.10]\t[%.10s]\n", s);
    ft_printf("ft_printf:\t[9]\t[%9s]\n", s);
	printf("printf:\t\t[9]\t[%9s]\n", s);
    ft_printf("ft_printf:\t[.9]\t[%.9s]\n", s);
	printf("printf:\t\t[.9]\t[%.9s]\n", s);
    ft_printf("ft_printf:\t[4]\t[%4s]\n", s);
	printf("printf:\t\t[4]\t[%4s]\n", s);
    ft_printf("ft_printf:\t[.4]\t[%.4s]\n", s);
	printf("printf:\t\t[.4]\t[%.4s]\n", s);
    ft_printf("ft_printf:\t[.0]\t[%.0s]\n", s);
	printf("printf:\t\t[.0]\t[%.0s]\n", s);
    ft_printf("ft_printf:\t[.]\t[%.s]\n", s);
	printf("printf:\t\t[.]\t[%.s]\n", s);
    ft_printf("ft_printf:\t[.1]\t[%.1s]\n", s);
	printf("printf:\t\t[.1]\t[%.1s]\n", s);
    ft_printf("ft_printf:\t[1]\t[%1s]\n", s);
	printf("printf:\t\t[1]\t[%1s]\n", s);
    ft_printf("ft_printf:\t[25.2]\t[%25.2s]\n", s);
	printf("printf:\t\t[25.2]\t[%25.2s]\n", s);
    ft_printf("ft_printf:\t[2.25]\t[%2.25s]\n", s);
	printf("printf:\t\t[2.25]\t[%2.25s]\n", s);
    ft_printf("ft_printf:\t[-25]\t[%-25s]\n", s);
	printf("printf:\t\t[-25]\t[%-25s]\n", s);
    ft_printf("ft_printf:\t[-25.2]\t[%-25.2s]\n", s);
	printf("printf:\t\t[-25.2]\t[%-25.2s]\n\n", s);
    s = "\0";
    ft_printf("ft_printf:\t[]\t[%s]\n", s);
	printf("printf:\t\t[]\t[%s]\n", s);
    ft_printf("ft_printf:\t[-]\t[%-s]\n", s);
	printf("printf:\t\t[-]\t[%-s]\n", s);
    ft_printf("ft_printf:\t[10]\t[%10s]\n", s);
	printf("printf:\t\t[10]\t[%10s]\n", s);
    ft_printf("ft_printf:\t[.10]\t[%.10s]\n", s);
	printf("printf:\t\t[.10]\t[%.10s]\n", s);
    ft_printf("ft_printf:\t[9]\t[%9s]\n", s);
	printf("printf:\t\t[9]\t[%9s]\n", s);
    ft_printf("ft_printf:\t[.9]\t[%.9s]\n", s);
	printf("printf:\t\t[.9]\t[%.9s]\n", s);
    ft_printf("ft_printf:\t[4]\t[%4s]\n", s);
	printf("printf:\t\t[4]\t[%4s]\n", s);
    ft_printf("ft_printf:\t[.4]\t[%.4s]\n", s);
	printf("printf:\t\t[.4]\t[%.4s]\n", s);
    ft_printf("ft_printf:\t[.0]\t[%.0s]\n", s);
	printf("printf:\t\t[.0]\t[%.0s]\n", s);
    ft_printf("ft_printf:\t[.]\t[%.s]\n", s);
	printf("printf:\t\t[.]\t[%.s]\n", s);
    ft_printf("ft_printf:\t[.1]\t[%.1s]\n", s);
	printf("printf:\t\t[.1]\t[%.1s]\n", s);
    ft_printf("ft_printf:\t[1]\t[%1s]\n", s);
	printf("printf:\t\t[1]\t[%1s]\n", s);
    ft_printf("ft_printf:\t[25.2]\t[%25.2s]\n", s);
	printf("printf:\t\t[25.2]\t[%25.2s]\n", s);
    ft_printf("ft_printf:\t[2.25]\t[%2.25s]\n", s);
	printf("printf:\t\t[2.25]\t[%2.25s]\n", s);
    ft_printf("ft_printf:\t[-25]\t[%-25s]\n", s);
	printf("printf:\t\t[-25]\t[%-25s]\n", s);
    ft_printf("ft_printf:\t[-25.2]\t[%-25.2s]\n", s);
	printf("printf:\t\t[-25.2]\t[%-25.2s]\n\n", s);

    ft_printf(NULL, "salut");
    printf(NULL, "salut");
    return (0);
}
