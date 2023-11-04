/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:43:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/28 16:43:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	return (write (1, &c, 1));
}

/*Devuelve un valor de tipo `int` para indicar la cantidad de caracteres que se han impreso en la consola. 
Para realizar un seguimiento del flujo del programa o realizar acciones basadas en la cantidad de caracteres escritos. 
Ej: medir cantidad de espacios de memoria que reservar para imprimir la string*/
int	print_string(char *str)
{
	int	count;
 
	count = 0;
	while(*str)
	{
		print_char((int *)str);
		count++;
		str++;
	}
	if (!*str)
	{
		if ((write (1, "(null)", 6)) != 6)
			return (-1);
		return (6);
	}
	return (count);
}
