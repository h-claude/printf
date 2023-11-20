/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:15:28 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/20 18:31:30 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_printf_format(char c, va_list ap);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int nbr);
int	ft_putpointer(void *p);
int	ft_hexadecimal(unsigned int n, char format);

#endif