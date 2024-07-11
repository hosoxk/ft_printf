/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-rudd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 00:39:02 by yde-rudd          #+#    #+#             */
/*   Updated: 2024/07/10 14:47:27 by yde-rudd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	converse(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == '%')
		length += ft_printf_char('%');
	else if (format == 'c')
		length += ft_printf_char(va_arg(args, int));
	else if (format == 's')
		length += ft_printf_string(va_arg(args, const char *));
	else if (format == 'd' || format == 'i')
		length += ft_printf_int(va_arg(args, int));
	else if (format == 'x' || format == 'X')
		length += ft_printf_hexa(va_arg(args, unsigned int), format);
	else if (format == 'u')
		length += ft_printf_unsigned(va_arg(args, unsigned int));
	else if (format == 'p')
		length += ft_printf_pointer(va_arg(args, unsigned long int));
	return (length);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		index;
	int		chars_printed;

	va_start(args, format);
	index = 0;
	chars_printed = 0;
	if (format == NULL)
		return (ft_printf("%s", NULL));
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			chars_printed += converse(args, format[index + 1]);
			index++;
		}
		else
			chars_printed += ft_printf_char(format[index]);
		index++;
	}
	va_end(args);
	return (chars_printed);
}
