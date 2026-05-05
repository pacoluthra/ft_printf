/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_puntbrhexa.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: fluthra <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/05/01 13:22:27 by fluthra        #+#    #+#                */
/*   Updated: 2026/05/01 13:22:30 by fluthra        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// #include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putnbr_hexa(size_t n, char conv)
{
	const char		*base;
	int				tot_count;

	tot_count = 0;
	if (conv == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		tot_count += ft_putnbr_hexa(n / 16, conv);
	write(1, &base[n % 16], 1);
	tot_count++;
	return (tot_count);
}

// int		main(void)
// {
// 	printf("%i", ft_putnbr_hexa(2147, 'X'));
// 	return (0);
// }
