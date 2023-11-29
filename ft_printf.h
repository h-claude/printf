/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:15:28 by hclaude           #+#    #+#             */
/*   Updated: 2023/11/29 17:41:08 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...) \
__attribute__ ((format(printf, 1, 2)));
int		ft_printf_format(char c, va_list ap);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int nbr);
int		ft_putpointer(void *p);
int		ft_hexadecimal(unsigned int n, char format);
int		ft_putnbr_unsigned(unsigned int nbr);
char	*ft_itoa_unsigned(unsigned int n);

#endif