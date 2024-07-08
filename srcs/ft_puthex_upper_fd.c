/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girts <girts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:09:45 by girts             #+#    #+#             */
/*   Updated: 2024/06/25 18:28:50 by girts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_puthex_upper_fd(long long int n, int fd)
{
	char	*result;
	char	*hex_digits;
	int		len;

	len = count_hexdigits(n);
	result = malloc(sizeof(char) * (len + 1));
	hex_digits = "0123456789AbCDEF";
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
