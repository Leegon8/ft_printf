/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauriago <lauriago@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:58:14 by lauriago          #+#    #+#             */
/*   Updated: 2023/11/09 13:14:34 by lauriago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

void	print_hex(int n, int *count, char c)
{
	unsigned int	num;
	char			*hex_min;
	char			*hex_may;

	hex_min = "0123456789abcdef";
	hex_may = "0123456789ABCDEF";
	num = (unsigned int)n;
	if (num >= 16 && *count != -1)
		print_hex(num / 16, count, c);
	if (c == 'x')
	{
		if (*count != -1 && print_char(hex_min[num % 16]) == -1)
			*count = -1;
	}
	if (c == 'X')
	{
		if (*count != -1 && print_char(hex_may[num % 16]) == -1)
			*count = -1;
	}
}
/*
int main() 
{
    int number = 999; // Número a convertir a hexadecimal
    int count = 0;    // Inicializamos el contador a 0

    printf("HEXADECIMAL EN MINUSCULAS: \n");
    print_hex(number, &count, 'x');
    printf("\n");
    printf("FUNCION ORIGINAL: %x\n", number);

    // Restablecemos el contador
    count = 0;

    printf("---------------------------------\n");
	printf("HEXADECIMAL EN MAYUSCULAS: \n");
    print_hex(number, &count, 'X');
    printf("\n");
    printf("FUNCION ORIGINAL: %X\n", number);

    return 0;
}*/
