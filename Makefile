#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgladush <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/28 18:18:58 by vgladush          #+#    #+#              #
#    Updated: 2019/10/02 01:01:44 by camurray         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	libftprintf.a

FUN		=	ft_nbrlen.c ft_printf.c ft_prfoper.c ft_atoi.c ft_prfnbr.c ft_strchr.c ft_copyuntil.c \
			ft_itoabase.c ft_strlen.c ft_unicode.c ft_prfdbl.c ft_strcpy.c ft_strstr.c ft_strnew.c\
			ft_strdup.c ft_joinfree.c ft_dblhex.c ft_qstr.c ft_isdigit.c ft_strequ.c ft_strndup.c \
			ft_put.c ft_putcolor.c
			
FUNDIR	=	./

GFLG	=	gcc -Wall -Wextra -Werror -c

HD		=	$(addprefix -I, .)

OBJDIR	=	./obj/

OBJS	=	$(FUN:.c=.o)

OBJ		=	$(addprefix $(OBJDIR), $(OBJS))

all: $(NAME)

$(NAME): ./libft.h $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo $(NAME) "ready"

$(OBJDIR)%.o: $(FUNDIR)%.c
	@mkdir -p $(OBJDIR)
	@$(GFLG) $(HD) -o $@ $<

clean:
	@rm -rf $(OBJDIR)
	@echo "Objects deleted"

fclean: clean
	@rm -f $(NAME)
	@echo $(NAME) "deleted"

re: fclean all

.PHONY: clean fclean re all
