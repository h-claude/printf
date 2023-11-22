/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:51:06 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/22 13:21:16 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_format(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (c == 'p')
		count += ft_putpointer(va_arg(ap, void *));
	else if (c == 'x' || c == 'X')
		count += ft_hexadecimal(va_arg(ap, int), c);
	else if (c == '%')
		count += ft_putchar(c);
	else if (c == 'u')
		count += ft_putnbr_unsigned(va_arg(ap, unsigned int));
	return (count);
}
