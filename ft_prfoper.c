/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prfoper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:18:08 by camurray          #+#    #+#             */
/*   Updated: 2019/07/18 18:30:14 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	strendf(char s, int *i, char *save, char *helpme, char *godhelpme)
{
	int		loop;
	size_t	fml;
	int		empty;

	loop = helpme[0] - '0';
	if (helpme[1] && ft_isdigit(helpme[1]))
	{
		loop *= 10;
		loop += helpme[1] - '0';
	}
	empty = loop;
	if (i[19] == 1)
		loop = loop - ft_figureoutstuff(i, save);
	if (!s && i[13] != 1 && i[8] != 9)
		*i -= 1;
	else
	{
		if (i[3] == 2)
		{
			if (s && i[24] == 0)
				i[1] += write(1, &s, 1);
			else
				i[1] += write(1, "\0", 1);
			while ((i[10] -= 1) > 0)
				i[1] += write(1, " ", 1);
		}
		else
		{
			while (i[3] == 1 && (i[10] -= 1) > 0)
				i[1] += write(1, "0", 1);
			while (!i[3] && (i[10] -= 1) > 0 && i[19] == 0)
				i[1] += write(1, " ", 1);
			fml = ft_figureoutstuff(i, save);
			i[20] = 0;
			if (ft_strequ(godhelpme, "(null)"))
			{
				if (fml > 6)
					i[21] = 1;
				else
					i[20] = 0;
			}
			i[23] = 0;
			if (ft_strequ(godhelpme, "\0"))
				loop = empty;
			while (!i[3] && loop > 0 && i[19] == 1 && loop >= 0 && i[20] == 0)
			{
				i[23] = 1;
				i[1] += write(1, " ", 1);
				loop--;
			}
			if (s && i[24] == 0)
				i[1] += write(1, &s, 1);
			else if (i[8] == 9)
				i[1] += write(1, "\0", 1);
		}
	}
}

int		prstsec(va_list *ar, int *i, char *un, int f, char *save, char *helpme)
{
	va_list	rrr;

	va_copy(rrr, *ar);
	if (f && !va_arg(rrr, void *))
		return (1);
	else if (f)
		return (0);
	i[11] = -1;
	if (!(un = va_arg(*ar, char *)))
	{
		if (i[11] < 0)
			un = ft_strdup("(null)");
		else
			un = ft_strdup("");
		while (i[11] > (int)ft_strlen(un))
			un = ft_joinfree("0", un, 2);
		ft_qstr(un, i, save, helpme);
		free(un);
	}
	else
		ft_qstr(un, i, save, helpme);
	return (0);
}

void	prfstr(char s, va_list *ar, int *i, char *un, char *save, char *helpme)
{
	if (i[7] || s == 'S' || s == 'C')
	{
		if ((s == 'c' || s == 'C') && (i[8] == 9) && (i[16] == -1))
		{
			if (!(un = unicd(va_arg(*ar, int))) && (i[10] -= 1))
				un = ft_strdup("");
			ft_qstr(un, i, save, helpme);
		}
		if (s == 's' || s == 'S')
		{
			if (!(un = unistr(va_arg(*ar, wchar_t *), i)) && (i[16] == 7))
				un = ft_strdup("(null)");
			ft_outun(un, i, 0, 0);
		}
		free(un);
	}
	else
		prstsec(ar, i, un, 0, save, helpme);
}

void	opersec(char *s, va_list *ar, int *i, char *st, int fuckit, char *save, char *helpme, char *tone)
{
	if (OPER(s[*i]) && OPE2(s[*i]) && OPE3(s[*i]))
		strendf(s[*i], i, save, helpme, s);
	else if (s[*i] == 'Z')
		ft_qstr(ft_rotnb(va_arg(*ar, char *), 42), i, save, helpme);
	else if (s[*i] == 'Y')
		ft_qstr(ft_rotnb(va_arg(*ar, char *), -42), i, save, helpme);
	else if ((s[*i] == 'a' || s[*i] == 'A') && i[5])
		ft_dblhex(va_arg(*ar, long double), i, s[*i]);
	else if (s[*i] == 'a' || s[*i] == 'A')
		ft_dblhex(va_arg(*ar, double), i, s[*i]);
	else if (DEVAL(s[*i]) || DEVA2(s[*i]))
		ft_prfnbr(s[*i], i, ar, st, fuckit, tone);
	else if (s[*i] == 'p' && (st = ft_itoabase(va_arg(*ar, uintmax_t), 16, 97)))
		ft_precforp(st, i);
	else if (s[*i] == 'R' || s[*i] == 'r' || s[*i] == 'B')
	{
		if (s[*i] == 'R')
			i[13] = 16;
		else
			i[13] = (s[*i] == 'r' ? 8 : 2);
		ft_qstr(ft_itoabase(ft_basetoint(va_arg(*ar, char *), i[13]), 0, 0), i, save, helpme);
	}
	else
		ft_prfdbl(s[*i], i, ar);
}

void	ft_prfoper(char *s, va_list *ar, int *i, int fuckit, char *save, char *helpme, char *tone)
{
	char	*st;
	char	c;

	st = NULL;
	if (s[*i] == 'n')
	{
		if (prstsec(0, 0, 0, 1, save, helpme))
			return ;
		if (i[8] != 2 && i[8] != 1)
			*va_arg(*ar, unsigned int *) = i[1];
		else if (i[8] == 2)
			*va_arg(*ar, int *) = (unsigned short int)i[1];
		else if (i[8] == 1)
			*va_arg(*ar, int *) = (unsigned char)i[1];
	}
	else if (s[*i] == 'c' || s[*i] == 'C' || s[*i] == 's' || s[*i] == 'S')
	{
		if (!i[7] && s[*i] == 'c' && ((c = va_arg(*ar, int)) || (i[8] == 9)))
			strendf(c, i, save, helpme, s);
		else
			prfstr(s[*i], ar, i, st, save, helpme);
	}
	else
		opersec(s, ar, i, st, fuckit, save, helpme, tone);
}
