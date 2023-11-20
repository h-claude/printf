/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:29:34 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/20 13:06:45 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	i = 0;
	while (str[i])
	{
		i += ft_putchar(str[i]);
	}
	return (i);
}

int	ft_putnbr(int nbr)
{
	int		len;
	char	*txt;

	len = 0;
	txt = ft_itoa(nbr);
	len = ft_putstr(txt);
	free(txt);
	return (len);
}


// #include <stdio.h>

// int main() {
// 	int b;
// 	b = -65546;
// 	ft_hexadecimal(b, 'x');
	
// 	int a = printf("\n%x\n", b);
	
// 	printf("Valeur retour printf : %i", a);
// }