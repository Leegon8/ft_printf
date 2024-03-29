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
#include <stdio.h>

static int	ft_toupper(int x)
{
	if (x >= 'a' && x <= 'z')
		return (x - 'a' + 'A');
	return (x);
}

int	ft_puthex(unsigned long n, int uppercase)
{
	int		count;
	int		tmp;
	char	hex_char;

	count = 0;
	if (n > 15)
	{
		tmp = ft_puthex(n / 16, uppercase);
		if (tmp == -1)
			return (-1);
		count += tmp;
	}
	hex_char = "0123456789abcdef"[n % 16];
	if (uppercase)
		hex_char = ft_toupper(hex_char);
	if (ft_putchar(hex_char) == -1)
		return (-1);
	return (++count);
}
/*
int main() 
{
    int number = 999; // Número a convertir a hexadecimal
    int count = 0;    // Inicializamos el contador a 0

    printf("HEXADECIMAL EN MINUSCULAS: \n");
    print_hex(number, count, 'x');
    printf("\n");
    printf("FUNCION ORIGINAL: %x\n", number);

    // Restablecemos el contador
    count = 0;

    printf("---------------------------------\n");
	printf("HEXADECIMAL EN MAYUSCULAS: \n");
    print_hex(number, count, 'X');
    printf("\n");
    printf("FUNCION ORIGINAL: %X\n", number);

    return 0;
}*/
