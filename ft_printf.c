/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paromero <paromero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:35:24 by paromero          #+#    #+#             */
/*   Updated: 2023/11/20 11:04:07 by paromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	ft_format(char	format, va_list	arg)
{
	int	i;

	i = 0;
	if (format == "c")
		i += ft_putchar(va_arg(arg, int));
	else if (format == "s")
		i += ft_putstr(va_arg(arg, char	*));
	else if (format == "p")
		i +=;
	else if (format == "d")
		i += ft_putnbr(va_arg(arg, int));
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
	va_list	arg;
	int	i;
	int	final;

	va_start (arg, format);
	i = 0;
	final = 0;
	while (*format)
	{
	 	if (format[i] == '%')
		{
			i++;
			final += ft_format(format[i], arg);
		}
		else
			write (1, format, 1);
		i++;
	}
	va_end(arg);
	return (final);
}
