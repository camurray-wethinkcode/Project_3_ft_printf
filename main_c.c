#include <stdio.h>
#include "libft.h"
#include <limits.h>
#include <float.h>
#include <math.h>

int main()
{
    char c;

    c = 'a';

    printf("***************************************\n");
	printf ("\t\tCHAR TEST\n");
	printf("***************************************\n\n");

    ft_printf("ft_printf:\t[]\t[%c]\n", c);
	printf("printf:\t\t[]\t[%c]\n", c);
    ft_printf("ft_printf:\t[.]\t[%.c]\n", c);
	printf("printf:\t\t[.]\t[%.c]\n", c);
    ft_printf("ft_printf:\t[2]\t[%2c]\n", c);
	printf("printf:\t\t[2]\t[%2c]\n", c);
    ft_printf("ft_printf:\t[-2]\t[%-2c]\n", c);
	printf("printf:\t\t[-2]\t[%-2c]\n", c);
    ft_printf("ft_printf:\t[-1]\t[%-1c]\n", c);
	printf("printf:\t\t[-1]\t[%-1c]\n\n", c);

     c = '\0';

    ft_printf("ft_printf:\t[]\t[%c]\n", c);
	printf("printf:\t\t[]\t[%c]\n", c);
    ft_printf("ft_printf:\t[.]\t[%.c]\n", c);
	printf("printf:\t\t[.]\t[%.c]\n", c);
    ft_printf("ft_printf:\t[2]\t[%2c]\n", c);
	printf("printf:\t\t[2]\t[%2c]\n", c);
    ft_printf("ft_printf:\t[-2]\t[%-2c]\n", c);
	printf("printf:\t\t[-6]\t[%-6c]\n", c);
    ft_printf("ft_printf:\t[-1]\t[%-1c]\n", c);
	printf("printf:\t\t[-1]\t[%-1c]\n\n", c);

    c = 1;

    ft_printf("ft_printf:\t[]\t[%c]\n", c);
	printf("printf:\t\t[]\t[%c]\n", c);
    ft_printf("ft_printf:\t[.]\t[%.c]\n", c);
	printf("printf:\t\t[.]\t[%.c]\n", c);
    ft_printf("ft_printf:\t[2]\t[%2c]\n", c);
	printf("printf:\t\t[2]\t[%2c]\n", c);
    ft_printf("ft_printf:\t[-2]\t[%-2c]\n", c);
	printf("printf:\t\t[-2]\t[%-2c]\n", c);
    ft_printf("ft_printf:\t[-1]\t[%-1c]\n", c);
	printf("printf:\t\t[-1]\t[%-1c]\n\n", c);

    c = CHAR_MAX;

    ft_printf("ft_printf:\t[]\t[%c]\n", c);
	printf("printf:\t\t[]\t[%c]\n", c);
    ft_printf("ft_printf:\t[.]\t[%.c]\n", c);
	printf("printf:\t\t[.]\t[%.c]\n", c);
    ft_printf("ft_printf:\t[2]\t[%2c]\n", c);
	printf("printf:\t\t[2]\t[%2c]\n", c);
    ft_printf("ft_printf:\t[-2]\t[%-2c]\n", c);
	printf("printf:\t\t[-2]\t[%-2c]\n", c);
    ft_printf("ft_printf:\t[-1]\t[%-1c]\n", c);
	printf("printf:\t\t[-1]\t[%-1c]\n\n", c);

    return (0);
}
