/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girts <girts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:35:38 by girts521          #+#    #+#             */
/*   Updated: 2024/06/26 08:08:03 by girts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	initialize_table(t_format_specifier *format_table)
{
	format_table[0].specifier = 'c';
	format_table[0].handler = handle_char;
	format_table[1].specifier = 's';
	format_table[1].handler = handle_string;
	format_table[2].specifier = 'd';
	format_table[2].handler = handle_int;
	format_table[3].specifier = 'i';
	format_table[3].handler = handle_int;
	format_table[4].specifier = 'u';
	format_table[4].handler = handle_unsigned_int;
	format_table[5].specifier = 'p';
	format_table[5].handler = handle_pointer;
	format_table[6].specifier = 'x';
	format_table[6].handler = handle_hex;
	format_table[7].specifier = 'X';
	format_table[7].handler = handle_hex_upper;
}

static int	handle_argument(char conversion, va_list *ap, \
							t_format_specifier *format_table)
{
	size_t	i;

	i = 0;
	while (i < 9)
	{
		if (format_table[i].specifier == conversion)
		{
			format_table[i].handler(*ap);
			return (1);
		}
		i++;
	}
	return (0);
}

static int	process_format_string(const char *str, va_list *ap, \
									t_format_specifier *format_table)
{
	char	conversion;
	int		handled;

	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str)
			{
				conversion = *str;
				handled = handle_argument(conversion, ap, format_table);
				if (!handled)
					return (0);
				str++;
			}
			else
				return (0);
		}
		else
			write(1, str++, 1);
	}
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list				ap;
	t_format_specifier	*format_table;
	int					result;

	format_table = malloc(9 * sizeof(t_format_specifier));
	if (!format_table)
	{
		ft_putstr_fd("Memory allocation failed\n", 2);
		return (0);
	}
	initialize_table(format_table);
	va_start(ap, str);
	result = process_format_string(str, &ap, format_table);
	va_end(ap);
	free(format_table);
	return (result);
}
