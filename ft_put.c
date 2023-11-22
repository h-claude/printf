/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:29:34 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/22 16:04:03 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return (ft_putstr("(null)"));
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

int	ft_putnbr_unsigned(unsigned int nbr)
{
	int		len;
	char	*txt;

	len = 0;
	txt = ft_itoa_unsigned(nbr);
	len = ft_putstr(txt);
	free(txt);
	return (len);
}
