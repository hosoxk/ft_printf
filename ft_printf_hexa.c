/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-rudd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:29:13 by yde-rudd          #+#    #+#             */
/*   Updated: 2024/06/26 14:26:02 by yde-rudd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_hexa_length(unsigned int nbr)
{
	int	length;

	length = 0;
	while (nbr != 0)
	{
		length++;
		nbr = nbr / 16;
	}
	return (length);
}

void	create_hexa(unsigned int nbr, const char format)
{
	if (nbr >= 16)
	{
		create_hexa(nbr / 16, format);
		create_hexa(nbr % 16, format);
	}
	else
	{
		if (nbr <= 9)
			ft_printf_char(nbr + '0');
		else
		{
			if (format == 'x')
				ft_printf_char(nbr - 10 + 'a');
			if (format == 'X')
				ft_printf_char(nbr - 10 + 'A');
		}
	}
}

int	ft_printf_hexa(unsigned int nbr, const char format)
{
	if (nbr == 0)
		return (write(1, "0", 1));
	else
		create_hexa(nbr, format);
	return (get_hexa_length(nbr));
}
