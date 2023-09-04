/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaqoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:04:33 by halaqoh           #+#    #+#             */
/*   Updated: 2021/11/26 20:04:42 by halaqoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list args)
{
	int	size;

	size = 0;
	if (c == 'c')
		size = ft_putchar(va_arg(args, int));
	if (c == 's')
		size = ft_putstr((char *)va_arg(args, char *));
	if (c == 'i')
		size = ft_putnbr(va_arg(args, int));
	if (c == '%')
		size = ft_putchar('%');
	if (c == 'd')
		size = ft_putnbr(va_arg(args, int));
	if (c == 'p')
	{
		size = ft_putstr("0x");
		size += ft_hexa(va_arg(args, size_t), "0123456789abcdef");
	}
	if (c == 'u')
		size = ft_hex(va_arg(args, unsigned int), "0123456789", 10);
	if (c == 'x')
		size = ft_hex(va_arg(args, unsigned int), "0123456789abcdef", 16);
	if (c == 'X')
		size = ft_hex(va_arg(args, unsigned int), "0123456789ABCDEF", 16);
	return (size);
}
