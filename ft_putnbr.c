/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr_fd.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: fluthra <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/20 14:19:24 by fluthra        #+#    #+#                */
/*   Updated: 2026/03/24 14:16:04 by fluthra        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_char(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(long n)
{
	int		tot_count;

	tot_count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		tot_count++;
	}
	if (n >= 10)
		tot_count += ft_putnbr(n / 10);
	ft_put_char((n % 10) + '0');
	tot_count++;
	return (tot_count);
}
