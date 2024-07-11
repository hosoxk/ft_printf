/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-rudd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:06:39 by yde-rudd          #+#    #+#             */
/*   Updated: 2024/06/26 16:43:57 by yde-rudd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned(unsigned int nbr)
{
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
}
