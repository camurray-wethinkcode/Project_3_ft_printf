#include <stdio.h>
#include "libft.h"
#include <limits.h>
#include <float.h>
#include <math.h>

int main()
{
    char *s;
	
	s = NULL;
	write(1, "1\n", 2);
	ft_printf("%s\n", s);
	printf("%s\n", s);
	write(1, "2\n", 2);
	ft_printf("%.s\n", s);
	printf("%.s\n", s);
	write(1, "3\n", 2);
	ft_printf("%.2s\n", s);
	printf("%.2s\n", s);
	write(1, "4\n", 2);
	ft_printf("%25.68s\n", s);
	printf("%25.68s\n", s);
	write(1, "5\n", 2);
	s = "HI";
	ft_printf("%s\n", s);
	printf("%s\n", s);
	write(1, "7\n", 2);
	ft_printf("%.s\n", s);
	printf("%.s\n", s);
	write(1, "8\n", 2);
    ft_printf("%.2s\n", s);
	printf("%.2s\n", s);
	write(1, "9\n", 2);
	ft_printf("[%25.68s]\n", s);
	printf("[%25.68s]\n", s);
	return (0);
}
