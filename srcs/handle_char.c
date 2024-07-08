/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girts <girts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:28:24 by girts             #+#    #+#             */
/*   Updated: 2024/06/25 18:29:09 by girts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_char(va_list ap)
{
	char	char_arg;

	char_arg = (char)va_arg(ap, int);
	write(1, &char_arg, 1);
}
