/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:58:56 by camurray          #+#    #+#             */
/*   Updated: 2019/07/18 20:40:55 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdarg.h>
# include <wchar.h>
# include <wctype.h>
# include <stdint.h>

# define FLSIZ(x) x == 'j' || x == 'z' || x == '#' || x == 'l' || x == 'h'
# define FL2(x) x == ' ' || (x != 44 && x != 47 && x > 41 && x < 58) || x == 'L'
# define DEVAL(x) x == 'D' || x == 'd' || x == 'x' || x == 'O' || x == 'b'
# define DEVA2(x) x == 'i' || x == 'o' || x == 'X' || x == 'u' || x == 'U'
# define OPER(x) (x < 96 || x > 103) && x != 105 && x != 120 && x != 114
# define OPE2(x) x != 115 && (x < 110 || x > 112) && x != 117  && x != 83
# define OPE3(x) (x < 65 || x > 71) && x != 85 && x != 88 && x != 79

int	ft_atoi(const char *str);
void	hexlast(char **s, int *i);
void	hexsec(uintmax_t z, char **s, int *i, int y);
void	ft_dblhex(long double c, int *i, int y);
int	ft_isdigit(int n);
int		ft_checklen(int nbr);
char	*ft_fill_array(int nbr, char *ret, int len, int s);
char	*ft_intmax(void);
char	*ft_itoa(int nbr);
int			validbase(char *s, int base, int l, int j);
char		*transbase(uintmax_t nbr, int base, int reg);
char		*sigitoa(intmax_t c, char *res, int i);
uintmax_t	ft_basetoint(char *s, int base);
char		*ft_itoabase(uintmax_t c, int sys, int rg);
char	*ft_joinfree(char *s1, char *s2, int j);
int	ft_unblen(uintmax_t c);
int	ft_nbrlen(intmax_t c, int a);
int		justfree(char **ito, int a, char c);
char	*enddbl(char *s, int *i, int r, int l);
int		dbltoa(long double c, int i, char **s, long double y);
void	ft_precforp(char *s, int *i);
void	ft_prfdbl(char c, int *i, va_list *ar);
int		ft_hasint(char *str);
char	*checkshar(char *ito, int *i, char c, int fuckit);
char	*tochsize(char *ito, int *i, int *r);
char	*endprf(char *s, int *i, int r, char c, int fuckit, char *tone);
void	prfsec(char c, int *i, va_list *ar, char *ito, int fuckit, char *tone);
void	ft_prfnbr(char c, int *i, va_list *ar, char *ito, int fuckit, char *tone);
void	strendf(char s, int *i, char *save, char *helpme, char *godhelpme);
int		prstsec(va_list *ar, int *i, char *un, int f, char *save, char *helpme);
void	prfstr(char s, va_list *ar, int *i, char *un, char *save, char *helpme);
void	opersec(char *s, va_list *ar, int *i, char *st, int fuckit, char *save, char *helpme, char *tone);
void	ft_prfoper(char *s, va_list *ar, int *i, int fuckit, char *save, char *helpme, char *tone);
int		flbax(char *s, va_list *ar2, int *i);
void	flg_sec(char *s, int *i, va_list *ar2);
void	flg_fir(char *s, va_list *ar, int *i, va_list *ar2, int fuckit, char *save, char *helpme, char *tone);
int		ft_sprintf(char *str, va_list varg, int *i, int fuckit, char *save, char *helpme, char *tone);
int		ft_printf(const char *format, ...);
size_t	ft_figureoutstuff(int *i, char *save);
char	*ft_qstr(char *s, int *i, char *save, char *helpme);
char	*ft_rotng(char *s, int i);
char	*ft_rotnb(char *s, int i);
void	outunsec(char *s, int *i, int j, int c);
void	ft_outun(char *s, int *i, int j, int c);
char	*ft_strcpy(char *dst, const char *src);
char		*ft_strdup(const char *s1);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strequ(char const *s1, char const *s2);
size_t		ft_wcharlen(const wchar_t *s);
size_t		ft_strlen(const char *s);
char	*ft_strndup(const char *str, size_t maxlen);
char	*ft_strstr(const char *haystack, const char *needle);
char	uninasc(char *s);
char	lascod(char *s, int y);
char	*transcode(char *s, int i, char *res, int c);
char	*unicd(wint_t c);
char	*unistr(wchar_t *s, int *j);
char    *ft_strchr(const char *s, int c);
void    *ft_memcpy(void *dst, const void *src, size_t n);
size_t  ft_strnlen(const char *str, size_t maxlen);
int            ft_copyuntil(char **dst, char *src, char c);
char    *ft_strnew(size_t size);

#endif
