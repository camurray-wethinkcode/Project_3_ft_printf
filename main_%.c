#include <stdio.h>
#include "libft.h"
#include <limits.h>
#include <float.h>
#include <math.h>

int main()
{

    printf("***************************************\n");
	printf ("\t\t%% TEST\n");
	printf("***************************************\n\n");

//	ft_printf("Test 1:\n");
    ft_printf("ft_printf:\t[]\t[%%]\n");
	printf("printf:\t\t[]\t[%%]\n");
//	ft_printf("Test 2:\n");
    ft_printf("ft_printf:\t[25]\t[%25%]\n");
	printf("printf:\t\t[25]\t[%25%]\n");
//	ft_printf("Test 3:\n");
    ft_printf("ft_printf:\t[025]\t[%025%]\n");
	printf("printf:\t\t[025]\t[%025%]\n");
//	ft_printf("Test 4:\n");
    ft_printf("ft_printf:\t[025.2]\t[%025.2%]\n");
	printf("printf:\t\t[025.2]\t[%025.2%]\n");
//	ft_printf("Test 5:\n");
    ft_printf("ft_printf:\t[.2]\t[%.2%]\n");
	printf("printf:\t\t[.2]\t[%.2%]\n");
//	ft_printf("Test 6:\n");
    ft_printf("ft_printf:\t[ ]\t[% %]\n");
	printf("printf:\t\t[ ]\t[% %]\n");
//	ft_printf("Test 7:\n");
    ft_printf("ft_printf:\t[ ]\t[% %%%%%%%%%%%%%%%]\n");
    printf("ft_printf:\t[ ]\t[% %%%%%%%%%%%%%%%]\n");
//	ft_printf("Test 8:\n");
    ft_printf("ft_printf:\t[ ]\t[% %%%%%%%%%%%%4%%%]\n");
    printf("ft_printf:\t[ ]\t[% %%%%%%%%%%%%4%%%]\n");
//	ft_printf("Test 9:\n");
    ft_printf("ft_printf:\t[ ]\t[% %%%%%%%%%%%%0%%%]\n");
    printf("ft_printf:\t[ ]\t[% %%%%%%%%%%%%0%%%]\n");
    return (0);
}
