/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:55:57 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/20 15:42:45 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

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

	i = countdigit(n);
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	tab = ft_calloc(i + 1, sizeof(char));
	while (n / 16 != 0 || i >= 0)
	{
		tab[i] = base[(n%16)];
		n /= 16;
		i--;
	}
	i = ft_putstr(tab);
	// printf("La chaine est : %s i = %d", tab, i);
	free(tab);
	return (i);
}
