/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paromero <paromero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:35:24 by paromero          #+#    #+#             */
/*   Updated: 2023/11/16 11:45:36 by paromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	ft_format(format, arg)
{
	int	i;

	i = 0;
	if (format == "c")
		i += ft_putchar(arg);
	else if (format == "s")
		i += ft_putstr(arg);
	else if (format == "p")
		i +=;
	else if (format == "d")
		i += ft_putnbr(arg);
	else if (format == "i")
		i +=;
	else if (format == "u")
		i +=;
	else if (format == "x")
		i +=;
	else if (format == "X")
		i +=;
	else if (format == "%")
		write (1, "%", 1);
	return (i);
}

int	ft_printf(char const *format, ...)
{
	va_arg	arg;
	int		i;
	int		final;

	i = 0;
	final = 0;
	va_start (arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			i += ft_format(format[i], arg);
		}
		i++;
	}
}
