/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:29:34 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/14 13:38:23 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putstr(char *str)
{
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	int i;

	i = 0;
	while (str[i])
	{
		write(1, str[i],1);
		i++;
	}
	return (i);
}

int ft_putnbr(int nbr)
{
	int len;
	char *txt;
	
	len = 0;
	txt = ft_itoa(nbr);
	len = ft_putchar(txt);
	free(txt);
	return (len);
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int ft_putpointer(void *p)
{
	
}