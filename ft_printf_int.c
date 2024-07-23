/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-rudd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:39:13 by yde-rudd          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/07/21 18:22:46 by yde-rudd         ###   ########.fr       */
=======
/*   Updated: 2024/06/26 16:40:42 by yde-rudd         ###   ########.fr       */
>>>>>>> 6c296124a82e854905e4ad856a2b8f50ca33a25a
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int	ft_printf_int(int nbr)
{
<<<<<<< HEAD
	int				count;
	unsigned int	i;

	count = 0;
	if (nbr < 0)
	{
		count += ft_printf_char('-');
		i = -nbr;
	}
	else
		i = nbr;
	if (i <= 9)
		count += ft_printf_char(i + 48);
	else
	{
		count += ft_printf_int(i / 10);
		count += ft_printf_char(i % 10 + 48);
	}
	return (count);
=======
	long	nb;
	int		length;
	char	*nbstr;

	nb = nbr;
	length = 0;
	nbstr = ft_itoa(nb);
	if (!nbstr)
		return (0);
	length += ft_printf_string(nbstr);
	free(nbstr);
	return (length);
}

char	*ft_itoa(int n)
{
	char				*s;
	long int			len;
	unsigned int		number;
	int					sign;

	sign = 1;
	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		number = n * -1;
		s[0] = '-';
	}
	else
		number = n;
	s = ft_char(s, number, len);
	return (s);
}

char	*ft_char(char *s, unsigned int number, long int len)
{
	while (number > 0)
	{
		s[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (s);
}

long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
>>>>>>> 6c296124a82e854905e4ad856a2b8f50ca33a25a
}
