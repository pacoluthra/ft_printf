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

int	check_conversion(const char str, va_list vargs)
{
	if (str == 'c')
		return(ft_putchar(va_args(vargs)));
	else if (str == 's')
		ft_putstr();
	else if (str == 'p')
		ft_putptr();
	else if (str == 'd' || str == 'i')
		ft_putnbr();
	else if (str == 'u')
		ft_putnbr();
	else if (str == 'x' || str == 'X')
		ft_putnbrhexa();
	else if (str == '%')
		ft_putchar('%');
	else
		return (0);
}


int	ft_printf(const char *str, ...)
{
	va_list vargs;
	int count;
	int	conv_count;

	va_start(vargs, str);
	count = 0;
	while(*str)
	{
		conv_count = 0;
		if(*str == '%')
		{
			str++;
			conv_count = check_conversion(str, vargs);
			count += conv_count;
		}
		str++;
		
	}
	va_end(vargs);
	return (0);
}
