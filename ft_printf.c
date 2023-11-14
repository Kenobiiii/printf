/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paromero <paromero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:35:24 by paromero          #+#    #+#             */
/*   Updated: 2023/11/14 11:21:53 by paromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(char const *format, ...)
{
	va_arg	arg;
	int	i;
	int	final;

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
