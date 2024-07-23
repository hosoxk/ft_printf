/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-rudd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 03:54:19 by yde-rudd          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/07/23 14:59:33 by yde-rudd         ###   ########.fr       */
=======
/*   Updated: 2024/06/28 14:05:47 by yde-rudd         ###   ########.fr       */
>>>>>>> 6c296124a82e854905e4ad856a2b8f50ca33a25a
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int			ft_printf(const char *format, ...);
<<<<<<< HEAD
int			converse(char format, va_list args);
int			ft_printf_char(char c);
int			ft_printf_string(const char *str);
int			ft_printf_int(int nbr);
int			ft_printf_hexa(unsigned long nbr);
int			ft_printf_hexa_baselow(unsigned long int nbr);
int			ft_printf_hexa_baseup(unsigned long int nbr);
int			ft_printf_unsigned(unsigned int nbr);
int			ft_printf_pointer(unsigned long nbr);
=======
int			converse(va_list args, const char format);
int			ft_printf_char(char c);
int			ft_printf_string(const char *str);
int			ft_printf_int(int nbr);
int			get_hexa_length(unsigned int nbr);
void		create_hexa(unsigned int nbr, const char format);
int			ft_printf_hexa(unsigned int nbr, const char format);
int			ft_printf_unsigned(unsigned int nbr);
int			ft_printf_pointer(unsigned long nbr);
int			get_pointer_length(unsigned long int nbr);
int			unbase(unsigned long int nb);
char		*ft_char(char *s, unsigned int number, long int len);
long int	ft_len(int n);
char		*ft_itoa(int n);
>>>>>>> 6c296124a82e854905e4ad856a2b8f50ca33a25a

#endif
