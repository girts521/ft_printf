/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girts <girts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:05:42 by girts521          #+#    #+#             */
/*   Updated: 2024/06/26 08:09:17 by girts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef void	(*t_format_handler)(va_list ap);

typedef struct t_format_specifier
{
	char				specifier;
	t_format_handler	handler;
}	t_format_specifier;

int		ft_printf(const char *str, ...);
void	ft_putptr_fd(void *ptr, int fd);
int		count_hexdigits(long long int n);
void	ft_puthex_fd(long long int n, int fd);
void	ft_puthex_upper_fd(long long int n, int fd);
void	handle_char(va_list ap);
void	handle_hex_upper(va_list ap);
void	handle_hex(va_list ap);
void	handle_int(va_list ap);
void	handle_pointer(va_list ap);
void	handle_string(va_list ap);
void	handle_unsigned_int(va_list ap);

#endif