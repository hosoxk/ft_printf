/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-rudd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:27:54 by yde-rudd          #+#    #+#             */
/*   Updated: 2024/07/23 14:59:54 by yde-rudd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_printf_pointer(unsigned long nbr)
{
	int		count;
	char	*hexa;

	count = 0;
	hexa = "0123456789abcdef";
	if (nbr == 0)
		return (ft_printf_string("(nil)"));
	count += ft_printf_string("0x");
	if (nbr >= 16)
		count += ft_printf_pointer(nbr / 16);
	count += ft_printf_char(hexa[nbr % 16]);
	return (count);
}
