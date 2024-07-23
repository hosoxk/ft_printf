/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-rudd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 00:39:02 by yde-rudd          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/07/21 18:32:28 by yde-rudd         ###   ########.fr       */
=======
/*   Updated: 2024/07/10 14:47:27 by yde-rudd         ###   ########.fr       */
>>>>>>> 6c296124a82e854905e4ad856a2b8f50ca33a25a
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

<<<<<<< HEAD
int	converse(char format, va_list list)
{
	int		count;

	count = 0;
	if (format == 'c')
		count = ft_printf_char(va_arg(list, int));
	else if (format == 's')
		count = ft_printf_string(va_arg(list, char *));
	else if (format == 'p')
		count = ft_printf_hexa(va_arg(list, unsigned long));
	else if (format == 'd' || format == 'i')
		count = ft_printf_int(va_arg(list, int));
	else if (format == 'u')
		count = ft_printf_unsigned(va_arg(list, unsigned int));
	else if (format == 'x')
		count = ft_printf_hexa_baselow(va_arg(list, unsigned int));
	else if (format == 'X')
		count = ft_printf_hexa_baseup(va_arg(list, unsigned int));
	else if (format == '%')
		count = ft_printf_char('%');
	return (count);
=======
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
>>>>>>> 6c296124a82e854905e4ad856a2b8f50ca33a25a
}

int	ft_printf(const char *format, ...)
{
<<<<<<< HEAD
	va_list	arg;
	size_t	i;
	size_t	chars_printed;

	if (!format)
		return (0);
	va_start(arg, format);
	i = 0;
	chars_printed = 0;
	while (format[i])
	{
		if (format[i] == '%')
			chars_printed += converse((char)format[++i], arg);
		else
		{
			write(1, &format[i], 1);
			chars_printed++;
		}
		i++;
	}
	va_end(arg);
=======
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
>>>>>>> 6c296124a82e854905e4ad856a2b8f50ca33a25a
	return (chars_printed);
}
