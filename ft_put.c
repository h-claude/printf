/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:29:34 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/16 18:00:38 by hclaude          ###   ########.fr       */
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

int	ft_hexadecimal(long long int n)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * -1, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(temp / 10, fd);
			ft_putnbr_fd(temp % 10, fd);
		}
		else
			ft_putchar_fd('0' + n, fd);
	}
}


#include <stdio.h>

int main() {
//   void *p;
//   char *str = "test";
//   p = str;
//   printf("%p\n", p);
//   printf("\n");
//   ft_putpointer(p);
	printf("%d", 10);
}