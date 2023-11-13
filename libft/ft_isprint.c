/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:48:01 by hclaude           #+#    #+#             */
/*   Updated: 2023/10/17 14:48:15 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
	{
		return (1);
	}
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isprint(30));
	printf("%d", isprint(30));
}
*/
