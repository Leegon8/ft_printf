/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauriago <lauriago@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:04:18 by lauriago          #+#    #+#             */
/*   Updated: 2023/11/12 19:41:48 by lauriago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
 
#include <stdio.h>
#include <unistd.h>

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int	print_string(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (print_char(*str) == -1)
			return (-1);
		count++;
		str++;
	}
	if (count > *str)
		return (count);
	if (!*str)
	{
		if ((write (1, "(null)", 6)) != 6)
			return (-1);
		return (6);
	}
	return (count);
}
*/

static void	ft_print_ptr(unsigned long ptr, int *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (*count != -1 && ptr > 0)
	{
		ft_print_ptr(ptr / 16, count);
		if (*count != -1 && print_char(hex[ptr % 16]) == -1)
			*count = -1;
	}
}

void	print_ptr(unsigned long ptr, int *count)
{
	int	temp_count;

	temp_count = 0;
	print_string("0x");
	temp_count += 2;
	ft_print_ptr(ptr, &temp_count);
	*count += temp_count;
}
/*
int main()
{
	char *ptr = "hola";
	int count = 0;
	printf("\nFunction test:\n");
	print_ptr((unsigned long)ptr, &count);
	printf("\n\nOriginal function:");
	printf("\n%p\n\n", ptr);
    return 0;
}*/
