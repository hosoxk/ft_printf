/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-rudd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:27:54 by yde-rudd          #+#    #+#             */
/*   Updated: 2024/07/11 17:18:16 by yde-rudd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_printf_pointer(unsigned long nbr)
{
	int				length;
	unsigned long	address;

	address = (unsigned long)nbr;
	length = 0;
	if (nbr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	length += write(1, "0x", 2);
	length += unbase(address);
	return (length);
}

int	get_pointer_length(unsigned long int nbr)
{
	int	length;

	length = 0;
	while (nbr != 0)
	{
		length++;
		nbr /= 16;
	}
	return (length);
}

int	unbase(unsigned long int nb)
{
	int		count;
	char	*hexa;

	count = 0;
	hexa = "0123456789abcdef";
	if (nb >= 16)
		count += unbase(nb / 16);
	count += ft_printf_char(hexa[nb % 16]);
	return (count);
}
