/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_ft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaqoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:54:31 by halaqoh           #+#    #+#             */
/*   Updated: 2021/11/26 19:54:34 by halaqoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_hex(unsigned int n, char *s, unsigned int base)
{
	int				size;
	unsigned int	nbr;

	size = 0;
	nbr = n;
	if (n < base)
		ft_putchar(s[n]);
	if (n >= base)
	{
		ft_hex(n / base, s, base);
		ft_hex(n % base, s, base);
	}
	while (nbr > 0)
	{
		nbr /= base;
		size++;
	}
	if (!n)
		size++;
	return (size);
}

int	ft_hexa(size_t n, char *s)
{
	int				size;

	size = 0;
	if (n < 16)
		ft_putchar(s[n]);
	if (n >= 16)
	{
		ft_hexa(n / 16, s);
		ft_hexa(n % 16, s);
	}
	if (!n)
		return (1);
	while (n)
	{
		n /= 16;
		size++;
	}
	return (size);
}
