/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_printf.h                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: fluthra <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/04/20 15:58:22 by fluthra        #+#    #+#                */
/*   Updated: 2026/04/20 15:58:26 by fluthra        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "ft_printf.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putendl(char *s);
int	ft_putnbr(int n);
int	ft_putstr(char *s);

#endif
