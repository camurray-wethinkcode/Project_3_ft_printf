#include "libft.h"

void		ft_putcolor(char *str, char *color)
{
	ft_putstr("\033[");
	if (!ft_strcmp(color, "BLACK") || !ft_strcmp(color, "black"))
		color = "30";
	if (!ft_strcmp(color, "RED") || !ft_strcmp(color, "red"))
		color = "31";
	if (!ft_strcmp(color, "GREEN") || !ft_strcmp(color, "green"))
		color = "32";
	if (!ft_strcmp(color, "YELLOW") || !ft_strcmp(color, "yellow"))
		color = "33";
	if (!ft_strcmp(color, "BLUE") || !ft_strcmp(color, "blue"))
		color = "34";
	if (!ft_strcmp(color, "MAGENTA") || !ft_strcmp(color, "magenta"))
		color = "35";
	if (!ft_strcmp(color, "CYAN") || !ft_strcmp(color, "cyan"))
		color = "36";
	if (!ft_strcmp(color, "DARK GRAY") || !ft_strcmp(color, "dark gray"))
		color = "90";
	if (!ft_strcmp(color, "DEFAULT") || !ft_strcmp(color, "default"))
		color = "39";
	ft_putstr(color);
	ft_putchar('m');
	ft_putstr(str);
	ft_putstr("\033[0m");
}
