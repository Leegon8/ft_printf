/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauriago <lauriago@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:58:14 by lauriago          #+#    #+#             */
/*   Updated: 2023/11/12 20:42:28 by lauriago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(int n, int count, char c)
{
	unsigned int	num;
	int				count2;
	char			*hex_min;
	char			*hex_may;

	hex_min = "0123456789abcdef";
	hex_may = "0123456789ABCDEF";
	num = (unsigned int)n;
	count2 = 0;
	if (num >= 16 && count != -1)
		print_hex(num / 16, count, c);
	if (c == 'x')
	{
		if (count != -1 && print_char(hex_min[num % 16]) == -1)
			count = -1;
	}
	if (c == 'X')
	{
		if (count != -1 && print_char(hex_may[num % 16]) == -1)
			count = -1;
	}
	return (count2);
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
