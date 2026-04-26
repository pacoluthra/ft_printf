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

void	ft_putnbr(int n)
{
	int	mod;
	int	div;

	mod = n % 10;
	div = n / 10;
	if (n < 0)
	{
		write(1, "-", 1);
		mod = -mod;
		div = -div;
	}
	if (div)
		ft_putnbr(div);
	ft_put_char(mod + 48);
}
