/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:57:21 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/17 18:57:33 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putpointer(void *p)
{
	int				i;
	char			txt[15];
	char const		*base;
	unsigned long	adr;

	if (!p)
		return (ft_putstr((char *)p));
	base = "0123456789abcdef";
	adr = (unsigned long)p;
	i = 13;
	txt[14] = 0;
	while (adr / 16 != 0 || i >= 0)
	{
		if (i == 1)
			txt[i] = 'x';
		else if (i == 0)
			txt[i] = '0';
		else
			txt[i] = base[(adr % 16)];
		adr /= 16;
		i--;
	}
	return (ft_putstr(txt));
}