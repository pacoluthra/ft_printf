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

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_hexa(int n)
{
	const char		*base;
	unsigned int	num;

	base = "0123456789ABCDEF";
	if (n < 0)
	{
		write(1, "-", 1);
		num = -n;
	}
	else
		num = n;
	if (num >= 16)
		ft_putnbr_hexa(num / 16);
	write(1, &base[num % 16], 1);
}

int	main(void)
{
	int	n;

	n = 2147483647;
	ft_putnbr_hexa(n);
	return (0);
}
