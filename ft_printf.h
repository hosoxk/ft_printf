/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-rudd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 03:54:19 by yde-rudd          #+#    #+#             */
/*   Updated: 2024/07/23 14:59:33 by yde-rudd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int			ft_printf(const char *format, ...);
int			converse(char format, va_list args);
int			ft_printf_char(char c);
int			ft_printf_string(const char *str);
int			ft_printf_int(int nbr);
int			ft_printf_hexa(unsigned long nbr);
int			ft_printf_hexa_baselow(unsigned long int nbr);
int			ft_printf_hexa_baseup(unsigned long int nbr);
int			ft_printf_unsigned(unsigned int nbr);
int			ft_printf_pointer(unsigned long nbr);

#endif
