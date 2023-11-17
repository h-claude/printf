/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:55:57 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/17 18:56:28 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_hexadecimal(long long int n, char format)
{
	if (n >= 16)
	{
		ft_hexadecimal(n / 16, format);
		ft_hexadecimal(n % 16, format);
	}
	else
	{
		if (n < 10)
			ft_putchar('0' + n);
		else
		{
			if (format == 'X')
				ft_putchar('A' + (n - 10));
			else
				ft_putchar('a' + (n - 10));
		}
	}
}