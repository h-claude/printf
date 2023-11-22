/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:36:58 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/22 16:30:31 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	countdigit_unsigned(long int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

static void	recustr(long int n, char *str, int count)
{
	if (count != -1)
	{
		if (n <= 9 && n >= 0)
			str[count] = '0' + n;
		else
		{
			recustr(n % 10, str, count--);
			recustr(n / 10, str, count--);
		}
	}
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char		*str;
	int			i;
	int			count;
	long int	num;

	i = 0;
	num = n;
	count = countdigit_unsigned(num);
	str = ft_calloc(count + 1, sizeof(char));
	if (!str)
		return (NULL);
	recustr(num, str, count - 1);
	return (str);
}
