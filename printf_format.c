/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:51:06 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/13 17:37:43 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int printf_format(char c, va_list ap)
{
	int count;

	count = 0;
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(ap, int), 1);
		count++;
	}
	else if (c == 's')
	{
		ft_putstr_fd(va_arg(ap, char *), 1);
		count += ft_strlen(va_arg(ap, char *));
	}
	else if (c == 'd')
	{
		
	}
	
}
