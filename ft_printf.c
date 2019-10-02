/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:31:02 by camurray          #+#    #+#             */
/*   Updated: 2019/10/02 01:00:32 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		flbax(char *s, va_list *ar2, int *i)
{
	if (ar2)
	{
		if (i[15] == 1 && (*i += 1))
		{
			i[15] = ft_atoi(&s[*i]);
			while (i[15] > 1 && (i[15] -= 1))
				va_arg(*ar2, void *);
			*i += ft_nbrlen(i[15], 1);
		}
		return (1);
	}
	while (*s)
	{
		if (*s == '%' && (*s++))
		{
			while (OPER(*s) && OPE2(*s) && OPE3(*s) && *s)
			{
				if (*s > 47 && *s < 58 && *(s + 1) == '$' && (i[15] = 1))
					return (1);
				s++;
			}
		}
		s++;
	}
	return (0);
}

void	flg_sec(char *s, int *i, va_list *ar2)
{
	if (s[*i] == 'h' && s[*i + 1] != 'h' && i[8] < 2)
		i[8] = 2;
	else if (s[*i] == 'h' && s[*i + 1] == 'h' && (*i += 1) && !i[8])
		i[8] = 1;
	else if (s[*i] == 'j' || (s[*i] == 'l' && s[*i + 1] == 'l' && (*i += 1)))
		i[8] = 3;
	else if (s[*i] == '*' && (flbax(s, ar2, i)))
	{
		if (((i[10] = va_arg(*ar2, int)) < 0) && (i[10] *= -1))
			i[3] = 2;
	}
	else if (s[*i] > 48 && s[*i] < 58 && (i[10] = ft_atoi(s + *i)))
		*i += ft_nbrlen(i[10], 1) - 1;
	else if (s[*i] == '.' && !(i[11] = 0) && (*i += 1))
	{
		if (s[*i] == '*' && (flbax(s, ar2, i)))
			i[11] = va_arg(*ar2, int);
		else if (s[*i] > 47 && s[*i] < 58)
			i[11] = ft_atoi(s + *i);
		else
			*i -= 1;
		while (s[*i] > 47 && s[*i] < 58 && s[*i + 1] > 47 && s[*i + 1] < 58)
			*i += 1;
	}
}

void	flg_fir(char *s, va_list *ar, int *i, va_list *ar2, int fuckit, char *save, char *helpme, char *tone)
{
	while (FLSIZ(s[*i]) || FL2(s[*i]))
	{
		if (s[*i] == ' ' && !i[2])
			i[2] = 1;
		else if (s[*i] == '+')
			i[2] = 2;
		else if (s[*i] == '-')
			i[3] = 2;
		else if (s[*i] == '0' && !i[3])
			i[3] = 1;
		else if (s[*i] == '#')
			i[4] = 1;
		else if (s[*i] == 'L')
			i[5] = 1;
		else if (s[*i] == 'z')
			i[6] = 1;
		else if (s[*i] == 'l' && s[*i + 1] != 'l')
			i[7] = 1;
		else
			flg_sec(s, i, ar2);
		*i += 1;
	}
	ft_prfoper(s, ar, i, fuckit, save, helpme, tone);
}

int		ft_sprintf(char *str, va_list varg, int *i, int fuckit, char *save, char *helpme, char *tone)
{
	va_list	tmp[2];

	while (str[*i])
	{
		if (str[*i] != '%')
			i[1] += write(1, &str[*i], 1);
		else if ((*i += 1) && (i[15] = ft_atoi(&str[*i])))
		{
			va_copy(tmp[0], varg);
			va_copy(tmp[1], varg);
			*i += ft_nbrlen(i[15], 1) + 1;
			while ((i[15] -= 1))
				va_arg(tmp[0], void *);
			i[15] = 1;
			while (i[15] && (i[15] += 1))
				i[i[15]] = 0;
			i[15] = 1;
			i[11] = -1;
			flg_fir((char *)str, tmp, i, &tmp[1], fuckit, save, helpme, tone);
		}
		*i += 1;
	}
	va_end(varg);
	return (i[1]);
}

int		ft_printf(const char *format, ...)
{
	int		i[25];
	va_list	varg;
	va_list	fuckitvarg;
	int		fuckit;
	char	*save;
	char	*tone;
	int		index;
	char	*helpme;
	char	*string;

    va_start(varg, format);
    if (ft_strchr(format, '%'))
    {
        save = NULL;
        tone = NULL;
        va_copy(fuckitvarg, varg);
        fuckit = va_arg(fuckitvarg, int);
        i[19] = 0;
        i[20] = 0;
        i[24] = 0;
        tone = ft_strchr(format, '%');
        if (tone != NULL)
        {
            tone += 1;
            index = (int)(tone - format);
            helpme = ft_strndup(tone, index + 1);
        }
        if (ft_strstr(tone, ".s") || ft_strstr(tone, ".0s"))
            i[24] = 1;
        if (ft_strchr(format, '-'))
            i[20] = 1;
        if (ft_strchr(format, '.'))
        {
            i[19] = 1;
            save = ft_strdup(ft_strchr(helpme, '.'));
            save = &save[1];
            save = ft_strndup(save, ft_strlen(save) - 1);
        }
	}
	if (flbax((char *)format, 0, i))
		return (ft_sprintf((char *)format, varg, i, fuckit, save, helpme, tone));
	while (format[i[0]] != '\0')
	{
        if (format[i[0]] != '%')
            i[1] += write(1, &format[i[0]], 1);
		else if ((i[0] += 1))
		{
			i[18] = 1;
			while (i[18] && (i[18] += 1))
				i[i[18]] = 0;
			i[11] = -1;
			flg_fir((char *)format, &varg, i, &varg, fuckit, save, helpme, tone);
		}
		i[0] += 1;
	}
	/*figure out my i array*/
	string = "i[0]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[0]);
	ft_putchar('\n');
	string = "i[1]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[1]);
	ft_putchar('\n');
	string = "i[2]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[2]);
	ft_putchar('\n');
	string = "i[3]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[3]);
	ft_putchar('\n');
	string = "i[4]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[4]);
	ft_putchar('\n');
	string = "i[5]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[5]);
	ft_putchar('\n');
	string = "i[6]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[6]);
	ft_putchar('\n');
	string = "i[7]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[7]);
	ft_putchar('\n');
	string = "i[8]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[8]);
	ft_putchar('\n');
	string = "i[9]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[9]);
	ft_putchar('\n');
	string = "i[10]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[10]);
	ft_putchar('\n');
	string = "i[11]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[11]);
	ft_putchar('\n');
	string = "i[12]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[12]);
	ft_putchar('\n');
	string = "i[13]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[13]);
	ft_putchar('\n');
	string = "i[14]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[14]);
	ft_putchar('\n');
	string = "i[15]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[15]);
	ft_putchar('\n');
	string = "i[16]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[16]);
	ft_putchar('\n');
	string = "i[17]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[17]);
	ft_putchar('\n');
	string = "i[18]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[18]);
	ft_putchar('\n');
	string = "i[19]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[19]);
	ft_putchar('\n');
	string = "i[20]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[20]);
	ft_putchar('\n');
	string = "i[21]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[21]);
	ft_putchar('\n');
	string = "i[22]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[22]);
	ft_putchar('\n');
	string = "i[23]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[23]);
	ft_putchar('\n');
	string = "i[24]";
	ft_putcolor(string, "RED");
	ft_putchar('\n');
	ft_putnbr(i[24]);
	ft_putchar('\n');
	va_end(varg);
	return (i[1]);
}
