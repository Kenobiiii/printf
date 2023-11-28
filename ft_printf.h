/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paromero <paromero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:00:24 by paromero          #+#    #+#             */
/*   Updated: 2023/11/28 11:11:17 by paromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <ctype.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdarg.h>
# include <limits.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(long long n);
int		ft_puthex(uintptr_t n, int is_uppercase, int include_prefix);
int		ft_format(char format, va_list arg);
int		ft_printf(char	const	*format, ...);

#endif
