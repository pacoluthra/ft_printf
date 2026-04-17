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

static void	ft_put_char_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	mod;
	int	div;

	mod = n % 10;
	div = n / 10;
	if (n < 0)
	{
		write(fd, "-", 1);
		mod = -mod;
		div = -div;
	}
	if (div)
		ft_putnbr_fd(div, fd);
	ft_put_char_fd(mod + 48, fd);
}
