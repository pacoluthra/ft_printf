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

int	ft_putnbr_hexa(int n, char conv)
{
	const char		*base;
	unsigned int	num;
	int				count;
	int				tot_count;

	if (conv == 'X')
		base = "0123456789ABCDEF";
	else if (conv == 'x')
		base = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		num = -n;
	}
	else
		num = n;
	if (num >= 16)
	{
		count = ft_putnbr_hexa(num / 16, conv);
		tot_count += count;
	}
	write(1, &base[num % 16], 1);
	tot_count++;
	return (tot_count);
}

// int		main(void)
// {
// 	printf("%i", ft_putnbr_hexa(2147, 'X'));
// 	return (0);
// }




