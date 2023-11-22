/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paromero <paromero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:40:37 by paromero          #+#    #+#             */
/*   Updated: 2023/11/22 11:35:18 by paromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
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
	while (*str)
	{
		i += ft_putchar(*str);
		str++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == '0')
		i += ft_putchar('0');
	else if (n < 0)
	{
		i += ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n > 9)
		i += ft_putnbr(n / 10);
	i += ft_putchar((n % 10) + '0');
	return (i);
}

int	ft_puthex(uintptr_t n, int is_uppercase, int include_prefix)
{
	int		local_count;
	char	hex_digit;

	local_count = 0;
	if (n == 0)
	{
		if (include_prefix)
			local_count += ft_putstr("0x");
		return (local_count + ft_putchar('0'));
	}
	if (include_prefix)
		local_count += ft_putstr("0x");
	if (n >= 16)
		local_count += ft_puthex(n / 16, is_uppercase, 0);
	hex_digit = n % 16;
	if (hex_digit > 9)
	{
		if (is_uppercase)
			local_count += ft_putchar('A' + hex_digit - 10);
		else
			local_count += ft_putchar('a' + hex_digit - 10);
	}
	else
		local_count += ft_putchar('0' + hex_digit);
	return (local_count);
}
