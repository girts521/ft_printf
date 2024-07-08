/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girts <girts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:35:06 by girts             #+#    #+#             */
/*   Updated: 2024/06/25 18:37:44 by girts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_pointer(va_list ap)
{
	void	*ptr_arg;

	ptr_arg = va_arg(ap, void *);
	ft_putptr_fd(ptr_arg, 1);
}
