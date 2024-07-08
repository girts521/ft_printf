/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girts <girts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:36:09 by girts             #+#    #+#             */
/*   Updated: 2024/06/25 19:23:07 by girts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_string(va_list ap)
{
	char	*str_arg;

	str_arg = va_arg(ap, char *);
	if (str_arg == NULL)
		str_arg = "(null)";
	write(1, str_arg, ft_strlen(str_arg));
}
