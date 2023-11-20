/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:55:57 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/20 19:13:47 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int countdigit(unsigned int n)
{
	long long int i;

	i = 0;
	while (n > 0 && i < 8)
	{
		i++;
		n /= 16;
	}
	return (i);
}

int	ft_hexadecimal(unsigned int n, char format)
{
	char const *base;
	int i;
	char *tab;

	i = countdigit(n)-1;
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	tab = ft_calloc(i, sizeof(char));
	if (!tab)
		return (ft_putstr(NULL));
	while (n / 16 != 0 || i >= 0)
	{
		tab[i] = base[(n%16)];
		n /= 16;
		i--;
	}
	i = ft_putstr(tab);
	free(tab);
	return (i);
}
