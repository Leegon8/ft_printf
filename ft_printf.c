/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauriago <lauriago@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:42:33 by lauriago          #+#    #+#             */
/*   Updated: 2026/11/03 12:49:24 by lauriane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_args(const char *ptr, va_list args)
{
	int	count;

	count = 0;
	if (*ptr == 'c')
		count = ft_putchar(va_arg(args, int));
	if (*ptr == 's')
		count = ft_putstr(va_arg(args, char *));
	if (*ptr == 'p')
	{
		if (ft_putstr("0x") == -1)
			return (-1);
		count = ft_puthex(va_arg(args, unsigned long), 0);
		count += 2;
	}
	if (*ptr == 'd' || *ptr == 'i')
		count = ft_putnbr(va_arg(args, int));
	if (*ptr == 'u')
		count = ft_putunbr(va_arg(args, unsigned int));
	if (*ptr == 'x')
		count = ft_puthex(va_arg(args, unsigned int), 0);
	if (*ptr == 'X')
		count = ft_puthex(va_arg(args, unsigned int), 1);
	if (*ptr == '%')
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list		args;
	int			count;
	int			temp;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			temp = ft_args(++str, args);
			if (temp == -1)
				return (-1);
			count += temp;
		}
		else
		{
			if (ft_putchar(*str) == -1)
				return (-1);
			count++;
		}
		str++;
	}
	va_end(args);
	return (count);
}

