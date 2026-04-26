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
	if (str == 's')
		ft_putstr();
	if (str == 'p')
		ft_putptr();
	if (str == 'd' || str == 'i')
		ft_putnbr();
	if (str == 'u')
		ft_putnbr();
	if (str == 'x' || str == 'X')
		ft_putnbrhexa();
	if (str == '%')
		ft_putchar('%');
	return (0);
}


int	ft_printf(const char *str, ...)
{
	va_list vargs;
	int	i;
	int	conv_count;

	va_start(vargs, str);
	i = 0;
	while(str[i])
	{
		conv_count = 0;
		if(str[i] == '%')
		{
			i++;
			conv_count = check_conversion(str[i], vargs);
		}
		i += conv_count;
		i++;
		
	}
	va_end(vargs);
	return (0);
}
