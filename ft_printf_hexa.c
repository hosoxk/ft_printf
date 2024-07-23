/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-rudd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:29:13 by yde-rudd          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/07/23 12:58:33 by yde-rudd         ###   ########.fr       */
=======
/*   Updated: 2024/06/26 14:26:02 by yde-rudd         ###   ########.fr       */
>>>>>>> 6c296124a82e854905e4ad856a2b8f50ca33a25a
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

<<<<<<< HEAD
int	ft_printf_hexa(unsigned long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	if (nbr > 0)
		count += (ft_printf_string("0x") + ft_printf_hexa_baselow(nbr));
	return (count);
}

int	ft_printf_hexa_baselow(unsigned long int nbr)
{
	int		count;
	char	*hexa;

	count = 0;
	hexa = "0123456789abcdef";
	if (nbr >= 16)
		count += ft_printf_hexa_baselow(nbr / 16);
	count += ft_printf_char(hexa[nbr % 16]);
	return (count);
}

int	ft_printf_hexa_baseup(unsigned long int nbr)
{
	int		count;
	char	*hexa;

	count = 0;
	hexa = "0123456789ABCDEF";
	if (nbr >= 16)
		count += ft_printf_hexa_baseup(nbr / 16);
	count += ft_printf_char(hexa[nbr % 16]);
	return (count);
=======
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
>>>>>>> 6c296124a82e854905e4ad856a2b8f50ca33a25a
}
