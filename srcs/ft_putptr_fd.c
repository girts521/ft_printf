/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girts <girts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:59:02 by girts             #+#    #+#             */
/*   Updated: 2024/06/25 18:31:03 by girts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putptr_fd(void *ptr, int fd)
{
	unsigned long long	address;
	char				buffer[18];
	const char			*hex_digits;
	int					i;

	address = (unsigned long long)ptr;
	hex_digits = "0123456789abcdef";
	i = 16;
	buffer[17] = '\0';
	if (!ptr)
	{
		ft_putstr_fd("(nil)", fd);
		return ;
	}
	while (address > 0)
	{
		buffer[i--] = hex_digits[address % 16];
		address /= 16;
	}
	buffer[i] = 'x';
	buffer[--i] = '0';
	ft_putstr_fd(&buffer[i], fd);
}
