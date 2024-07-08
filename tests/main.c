/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girts <girts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:04:04 by girts521          #+#    #+#             */
/*   Updated: 2024/06/25 19:20:16 by girts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	// char char_pointer;

	// char_pointer = 'p';


    // ft_printf("the char is: %c\nand the str is: %s\nand the number is %d and %i\nthe pointer is: %p\n", 'a', "Hello, World!", 42, -42, &char_pointer);
    // ft_printf("the hex is: %x\n", -429797987);
	// ft_printf(" %c \n", '0' - 254);
	// ft_printf("unsigned int: %u\n", 133212);

	ft_printf(" %c \n", '0');
	ft_printf(" %c\n", '0' - 256);
	ft_printf("%c \n", '0' + 256);
	ft_printf(" %c %c %c \n", '0', 0, '1');
	ft_printf(" %c %c %c \n", ' ', ' ', ' ');
	ft_printf(" %c %c %c \n", '1', '2', '3');
	ft_printf(" %c %c %c \n", '2', '1', 0);
	ft_printf(" %c %c %c \n", 0, '1', '2');
	ft_printf("%s\n", "");
	ft_printf(" %s \n", "");
	ft_printf(" %s \n", "-");
	ft_printf(" %s %s \n", "", "-");
	ft_printf(" %s %s \n", " - ", "");
	ft_printf(" %s %s %s %s %s\n", " - ", "", "4", "", "2 ");
	ft_printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
	ft_printf(" NULL %s NULL ", NULL);

	return (1);
}