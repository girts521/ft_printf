/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girts <girts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:30:40 by girts             #+#    #+#             */
/*   Updated: 2024/06/25 17:32:18 by girts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_hex_upper(va_list ap)
{
	long long int	hex_arg;

	hex_arg = va_arg(ap, long long int);
	ft_puthex_upper_fd(hex_arg, 1);
}
