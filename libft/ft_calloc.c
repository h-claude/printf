/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:55:10 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/04 15:13:56 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;
	size_t	i;
	char	*target;

	tab = malloc(count * size);
	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	target = tab;
	while (i < count * size)
	{
		target[i] = 0;
		i++;
	}
	return (tab);
}
