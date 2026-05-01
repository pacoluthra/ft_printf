/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_printf.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: fluthra <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/04/20 15:58:00 by fluthra        #+#    #+#                */
/*   Updated: 2026/04/20 15:58:06 by fluthra        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	check_conversion(const char conv, va_list vargs)
{
	if (conv == 'c')
		return (ft_putchar(va_args(vargs)));
	else if (conv == 's')
		return (ft_putstr(va_args(vargs)));
	else if (conv == 'p')
		return (ft_putptr(va_args(vargs)));
	else if (conv == 'd' || conv == 'i')
		return (ft_putnbr(va_args(vargs)));
	else if (conv == 'u')
		return (ft_putnbr(va_args(vargs)));
	else if (conv == 'x' || conv == 'X')
		return (ft_putnbrhexa(va_args(vargs), conv));
	else if (conv == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	vargs;
	int		count;
	int		conv_count;

	va_start(vargs, str);
	count = 0;
	while (*str)
	{
		conv_count = 0;
		if (*str == '%')
		{
			str++;
			conv_count = check_conversion(*str, vargs);
			if (conv_count == -1)
				return (-1);
			count += conv_count;
		}
		else
		{
			write(1, str, 1);
			count++;
		}
		str++;
	}
	va_end(vargs);
	return (count);
}
