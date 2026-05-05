# **************************************************************************** #
#                                                                              #
#                                                          ::::::::            #
#    Makefile                                            :+:    :+:            #
#                                                       +:+                    #
#    By: fluthra <marvin@42.fr>                        +#+                     #
#                                                     +#+                      #
#    Created: 2026/03/10 17:12:13 by fluthra        #+#    #+#                 #
#    Updated: 2026/04/17 13:58:03 by fluthra        ########   odam.nl         #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_putchar.c \
		ft_putnbr_hexa.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_putstr.c \
		ft_printf.c 

OBJ = $(SRC:%.c=%.o)

NAME = libftprintf.a

AR = ar rcs

CC = cc

CFlags = -Wall -Wextra -Wall

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c
	$(CC) -c $(CFlags) $< -o $@

clean:
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
