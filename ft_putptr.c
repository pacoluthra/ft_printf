/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putptr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: fluthra <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/05/01 16:41:34 by fluthra        #+#    #+#                */
/*   Updated: 2026/05/01 16:41:38 by fluthra        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	if (ptr == NULL || ptr == 0)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (ft_putnbr_hexa((size_t)ptr, 'x') + 2);
}
