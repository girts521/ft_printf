/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girts <girts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:06:51 by girts             #+#    #+#             */
/*   Updated: 2024/06/25 18:37:30 by girts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_puthex_fd(long long int n, int fd)
{
	char	*result;
	char	*hex_digits;
	int		len;

	len = count_hexdigits(n);
	result = malloc(sizeof(char) * (len + 1));
	hex_digits = "0123456789abcdef";
	if (!result)
		return ;
	result[len] = '\0';
	len--;
	if (!n)
	{
		ft_putstr_fd("(nil)", fd);
		return ;
	}
	while (n > 0 && len >= 0)
	{
		result[len] = hex_digits[n % 16];
		n /= 16;
		len--;
	}
	ft_putstr_fd(result, fd);
	free(result);
}
