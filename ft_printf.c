/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:08:23 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/20 16:33:28 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *format, ...)
{
	va_list ap;
	int i;
	int count;
	
	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_printf_format(format[i], ap);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}

#include <stdio.h>

int main()
{
	printf("Vrai : %c\n", 'a');
	ft_printf("Faux : %c\n", 'a');
}