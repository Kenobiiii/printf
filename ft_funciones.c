/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funciones.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paromero <paromero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:40:37 by paromero          #+#    #+#             */
/*   Updated: 2023/11/08 11:50:58 by paromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_funciones(char c)
{
	if (c < 65 || (c > 90 && c < 97) || c > 122)
		write (1, &c, 1);
	if else (
}

int main()
{
    char *c = "%x";
    char *d = "Buenos dias";
    if (c == "%c")
		write (1, d, 11);
	else
	    write (1, "no encontrado", 14);
    return 0;
}
