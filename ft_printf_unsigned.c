/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-rudd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:06:39 by yde-rudd          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/07/23 12:53:53 by yde-rudd         ###   ########.fr       */
=======
/*   Updated: 2024/06/26 16:43:57 by yde-rudd         ###   ########.fr       */
>>>>>>> 6c296124a82e854905e4ad856a2b8f50ca33a25a
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned(unsigned int nbr)
{
<<<<<<< HEAD
	int	count;

	count = 0;
	if (nbr <= 9)
		count += ft_printf_char(nbr + 48);
	else
	{
		count += ft_printf_unsigned(nbr / 10);
		count += ft_printf_char(nbr % 10 + 48);
	}
	return (count);
=======
	int		length;

	length = 0;
	if (nbr <= 9)
		length += ft_printf_char(nbr + 48);
	else
	{
		length += ft_printf_unsigned(nbr / 10);
		length += ft_printf_char(nbr % 10 + 48);
	}
	return (length);
>>>>>>> 6c296124a82e854905e4ad856a2b8f50ca33a25a
}
