/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girts <girts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:36:53 by girts             #+#    #+#             */
/*   Updated: 2024/06/25 18:26:58 by girts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_unsigned_int(va_list ap)
{
	unsigned int	arg_u;

	arg_u = va_arg(ap, unsigned int);
	ft_putnbr_fd(arg_u, 1);
}
